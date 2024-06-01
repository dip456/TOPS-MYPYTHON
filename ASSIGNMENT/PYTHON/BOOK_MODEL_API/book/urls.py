from django.urls import path
from .views import *

urlpatterns = [
   path('', bookInfo, name='booklist'),
   path('books/<int:book_id>',bookDetailAPI, name='bookDetailAPI'),
]