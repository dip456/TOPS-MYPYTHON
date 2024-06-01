from django.shortcuts import render
from .models import Book
from .serializers import BookSerializer
from rest_framework.decorators import api_view
from rest_framework.response import Response 
from rest_framework import status

# Create your views here.
@api_view(['GET','POST'])
def bookInfo(request):
    # add new data
    if request.method == 'POST':
        serializer =BookSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
    
    # get all data
    if request.method == 'GET':
        querySet = Book.objects.all()
        serializer = BookSerializer(querySet, many=True)
        return Response(serializer.data, status=status.HTTP_200_OK)
    
@api_view(['GET', 'PUT','PATCH', 'DELETE'])
def bookDetailAPI(request, book_id):
    try:
        querySet = Book.objects.get(id=book_id)
    except Book.DoesNotExist:
        return Response({'message':'book not found'}, status=status.HTTP_404_NOT_FOUND)
    
    if request.method == 'GET':
        serializer = BookSerializer(querySet)
        return Response(serializer.data, status=status.HTTP_200_OK)
    
    if request.method == 'PUT':
        serializer = BookSerializer(querySet, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_200_OK)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
        
    if request.method == 'PATCH':
        serializer = BookSerializer(querySet, data=request.data, partial=True)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_200_OK)
        else:
            return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
        
    if request.method == 'DELETE':
        delete_book_id = book_id
        querySet.delete()
        return Response({'message':f"{delete_book_id} - Book deleted successfully"}, status=status.HTTP_204_NO_CONTENT)

