from django.contrib import admin
from django.urls import path

from .views import *

urlpatterns = [
    
    path('',base_page,name='base_page'),
    path('login/',login_page,name='login_page'),
    
    path('dashboard',dashboard_page,name='dashboard_page' ),
    path('add_student/',add_student,name='add_student'),
    path('show_students/',show_students, name='show_students'),
    path('edit_student/<int:student_id>/',edit_student, name='edit_student'),
    path('delete_student/<int:student_id>/',delete_student, name='delete_student'),
    
    #teachers urls
    path('add_teacher/', add_teacher, name='add_teacher'),
    path('show_teachers/', show_teachers, name='show_teachers'),
    path('edit_teacher/<int:teacher_id>/', edit_teacher, name='edit_teacher'),
    path('delete_teacher/<int:teacher_id>/', delete_teacher, name='delete_teacher'),
    
    #books urls 
    path('add_book/', add_book, name='add_book'),
    path('show_books/', show_books, name='show_books'),
    path('edit_book/<int:book_id>/', edit_book, name='edit_book'),
    path('delete_book/<int:book_id>/', delete_book, name='delete_book'),

]