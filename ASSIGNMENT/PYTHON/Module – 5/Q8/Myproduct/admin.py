from django.contrib import admin
from .models import Product
from .models import ProductSubCat
from .models import productAdminModel
from .models import AdminProfile



admin.site.register(productAdminModel)
admin.site.register(AdminProfile)
admin.site.register(Product)
admin.site.register(ProductSubCat)

