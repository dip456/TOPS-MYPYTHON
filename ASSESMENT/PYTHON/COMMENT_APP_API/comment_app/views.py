from django.shortcuts import render

from .models import MyComment
from .serializers import CommentSerializer
from rest_framework.decorators import api_view
from rest_framework.response import Response 
from rest_framework import status

# Create your views here.
@api_view(['GET','POST'])
def commentInfo(request):
    # add new data
    if request.method == 'POST':
        serializer =CommentSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
    
    # get all data
    if request.method == 'GET':
        querySet = MyComment.objects.all()
        serializer = CommentSerializer(querySet, many=True)
        return Response(serializer.data, status=status.HTTP_200_OK)
    
@api_view(['GET', 'PUT','PATCH', 'DELETE'])
def commentDetailAPI(request, comment_id):
    try:
        querySet = MyComment.objects.get(id=comment_id)
    except MyComment.DoesNotExist:
        return Response({'message':'comment not found'}, status=status.HTTP_404_NOT_FOUND)
    
    if request.method == 'GET':
        serializer = CommentSerializer(querySet)
        return Response(serializer.data, status=status.HTTP_200_OK)
    
    if request.method == 'PUT':
        serializer = CommentSerializer(querySet, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_200_OK)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
        
    if request.method == 'PATCH':
        serializer = CommentSerializer(querySet, data=request.data, partial=True)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_200_OK)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
        
    if request.method == 'DELETE':
        delete_comment_id = comment_id
        querySet.delete()
        return Response({'message':f"{delete_comment_id} - comment deleted successfully"}, status=status.HTTP_204_NO_CONTENT)

