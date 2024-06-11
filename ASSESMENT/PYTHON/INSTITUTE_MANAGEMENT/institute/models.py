from django.db import models
from django.core.mail import send_mail


from master.models import BaseModel
from master.utils.INS_RANDOM.create_ppswd import generate_password

import os

# Create your models here.
class HodModel(BaseModel):
    PREFIX = 'HOD'
    hod_id = models.CharField(primary_key=True, blank=True, max_length=255)
    first_name = models.CharField(max_length=255, blank=False, null=False)
    last_name = models.CharField(max_length=255, blank=False, null=False)
    email = models.EmailField(max_length=255, blank=False, null=False, unique=True)
    mobile = models.CharField(max_length=50,  blank=False, null=False, unique=True)
    password = models.CharField(blank=True, max_length=255)
    is_active = models.BooleanField(default=True)   

    def __str__(self):
        return f"{self.hod_id}_{self.first_name}_{self.last_name}"

    def save(self, *args, **kwargs):
        if not self.pk:  # Only set created_at on creation
            last_hod = HodModel.objects.order_by('-created_at').first()
            if last_hod:
                last_numeric_part = int(last_hod.hod_id[len(self.PREFIX):])
                new_numeric_part = last_numeric_part + 1
                new_id = f"{self.PREFIX}{new_numeric_part:04}" 
            else:
                new_id = f"{self.PREFIX}0001"

            self.hod_id = new_id
            self.password = generate_password()

            subject = 'Your Login Credentials for  Institute Pvt. Ltd.'
            message = f"""
            Dear {self.first_name} {self.last_name},

            Welcome to  Institute Pvt. Ltd.! Your login credentials are as follows:

            HOD ID: {self.hod_id }
            Password: {self.password }
            Login your account: http://127.0.0.1:8000/hod/

            For security reasons, we recommend changing your password upon your first login. You can change your password by logging into your account and navigating to the settings or profile section.

            Please keep this information secure and do not share it with anyone. If you have any questions or need assistance, feel free to contact our support team.

            Best regards,
            Institute Pvt. Ltd. Team
            """
            from_email = os.getenv('EMAIL_HOST_USER')
            recipient_list = [f'{self.email}']
            send_mail(subject, message, from_email, recipient_list)

           
        super(HodModel, self).save(*args, **kwargs)



class Student(models.Model):
    first_name = models.CharField(max_length=100)
    last_name = models.CharField(max_length=100)
    course = models.CharField(max_length=100)
    age = models.IntegerField()
    email = models.EmailField(unique=True)
    enrollment_date = models.DateField(auto_now_add=True)

    def __str__(self):
        return f'{self.first_name} {self.last_name}'
    
class Teacher(models.Model):
    first_name = models.CharField(max_length=100)
    last_name = models.CharField(max_length=100)
    age = models.IntegerField()
    subject = models.CharField(max_length=100)
    class_study = models.CharField(max_length=100)
    
    def __str__(self):
        return f'{self.first_name} {self.last_name}'  


class Book(models.Model):
    title = models.CharField(max_length=100)
    author = models.CharField(max_length=100)

    def __str__(self):
        return self.title    
      

