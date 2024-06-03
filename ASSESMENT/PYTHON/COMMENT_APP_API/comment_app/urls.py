from django.urls import path
from .views import *

urlpatterns = [
   path('', commentInfo, name='commentlist'),
   path('comments/<int:comment_id>',commentDetailAPI, name='commentDetailAPI'),
]