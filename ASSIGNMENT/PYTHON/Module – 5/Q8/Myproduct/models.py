from django.db import models

from master.utils.PRODUCT_GENRATE_UNIQQ.genrate_pass_uniq import generate_password

# Create your models here.
class Product(models.Model):
    product_id = models.AutoField(primary_key=True)
    product_name = models.CharField(max_length=100)

    def __str__(self):
        return self.product_name

class ProductSubCat(models.Model):
    product = models.ForeignKey(Product, on_delete=models.CASCADE)
    price = models.DecimalField(max_digits=10, decimal_places=2)
    image = models.ImageField(upload_to='product_images/')
    model = models.CharField(max_length=100)
    ram = models.CharField(max_length=50)
    def __str__(self):
        return f"{self.product.product_name} - {self.model}"
    
    
class BaseModel(models.Model):
    created_at = models.DateTimeField(auto_now_add=True)
    updated_at = models.DateTimeField(auto_now=True)

    class Meta:
        abstract = True
        
class productAdminModel(BaseModel):
    PREFIX = 'ADM'
    adminn_id = models.CharField(primary_key=True, blank=True, max_length=255)
    first_name = models.CharField(max_length=255, blank=False, null=False)
    last_name = models.CharField(max_length=255, blank=False, null=False)
    email = models.EmailField(max_length=255, blank=False, null=False, unique=True)
    password = models.CharField(blank=True, max_length=255)

    def __str__(self):
        return f"{self.adminn_id}_{self.first_name}_{self.last_name}"
    def save(self, *args, **kwargs):
        if not self.pk:  # Only set created_at on creation
            last_employee = productAdminModel.objects.order_by('-created_at').first()
            if last_employee:
                last_numeric_part = int(last_employee.employee_id[len(self.PREFIX):])
                new_numeric_part = last_numeric_part + 1
                new_id = f"{self.PREFIX}{new_numeric_part:04}" 
            else:
                new_id = f"{self.PREFIX}0001"

            self.employee_id = new_id
            self.password = generate_password()
            new_employee_profile = AdminProfile(employee_id_id=self.employee_id)
            new_employee_profile.save()

        super(productAdminModel, self).save(*args, **kwargs)
        
class AdminProfile(BaseModel):
    DIR_NAME = 'admin_profiles'
    SUFFIX_WORD = 'adm_profile'

    employee_id = models.ForeignKey(productAdminModel, on_delete=models.CASCADE)
        

            

