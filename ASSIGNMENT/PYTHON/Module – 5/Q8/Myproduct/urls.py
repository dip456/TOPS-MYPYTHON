from django.urls import path



from .views import *
urlpatterns = [
    path('',adm_login_view,name='adm_login_view'),
    
    path('subcatlist',product_subcat_list,name='product_subcat_list'),
    path('addproduct',add_product, name='add_product'),
    path('product_list',product_list,name='product_list'),
    path('add_subcat/',add_product_subcat,name='add_product_subcat'),
    path('edit/<int:pk>/',product_update, name='product_update'),
    path('edit_product_sub_category/<int:pk>/',edit_product_sub_category, name='edit_product_sub_category'),
    path('delete_category/<int:pk>/',delete_category, name='delete_category'),
]
