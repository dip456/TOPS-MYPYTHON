from django import forms
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm



from .models import Product, ProductSubCat

class UserRegisterForm(UserCreationForm):
    email = forms.EmailField()

    class Meta:
        model = User
        fields = ['username', 'email', 'password1', 'password2']



class ProductForm(forms.ModelForm):
    class Meta:
        model = Product
        fields = ['product_name']

class ProductSubCatForm(forms.ModelForm):
    class Meta:
        model = ProductSubCat
        fields = ['product', 'price', 'image', 'model', 'ram']


    
