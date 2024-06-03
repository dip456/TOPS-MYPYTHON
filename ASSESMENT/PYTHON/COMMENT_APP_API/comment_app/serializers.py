from rest_framework import serializers
from .models import MyComment

class CommentSerializer(serializers.ModelSerializer):
    class Meta:
        model = MyComment
        fields = ['post_id', 'id', 'name', 'email', 'body']
