from django.contrib import admin
from django.urls import path

from .views import *

urlpatterns = [
    path('',student_login_view,name='student_login_view'),
    path('forgotpass/',forgot_password_view,name='forgot_password_view'),
    path('student_profile/',student_profile_page,name='student_profile_page')

    
]
