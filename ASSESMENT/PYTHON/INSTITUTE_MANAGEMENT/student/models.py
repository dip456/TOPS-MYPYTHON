from django.db import models
from django.core.mail import send_mail


from master.models import BaseModel
from master.utils.INS_RANDOM.create_ppswd import generate_password

import os

# Create your models here.
class StudentProfile(BaseModel):
    PREFIX = 'STUD'
    student_id = models.CharField(primary_key=True, blank=True, max_length=255)
    first_name = models.CharField(max_length=255, blank=False, null=False)
    last_name = models.CharField(max_length=255, blank=False, null=False)
    email = models.EmailField(max_length=255, blank=False, null=False, unique=True)
    mobile = models.CharField(max_length=50,  blank=False, null=False, unique=True)
    password = models.CharField(blank=True, max_length=255)

    def __str__(self):
        return f"{self.student_id}_{self.first_name}_{self.last_name}"

    def save(self, *args, **kwargs):
        if not self.pk:  # Only set created_at on creation
            last_student = StudentProfile.objects.order_by('-created_at').first()
            if last_student:
                last_numeric_part = int(last_student.student_id[len(self.PREFIX):])
                new_numeric_part = last_numeric_part + 1
                new_id = f"{self.PREFIX}{new_numeric_part:04}" 
            else:
                new_id = f"{self.PREFIX}01"

            self.student_id = new_id
            self.password = generate_password()

            subject = 'Your Login Credentials for  Institute Pvt. Ltd.'
            message = f"""
            Dear {self.first_name} {self.last_name},

            I hope this message finds you well.

            We are pleased to inform you that your application for admission to your course at this Institution  has been successful. Congratulations!

            Below are the details of your admission:

            Student Name: {self.first_name} {self.last_name}
            Student ID: {self.student_id }
            Password: {self.password }

            Please follow the steps below to complete your enrollment process:

            Accept Offer: Confirm your acceptance by replying to this email or clicking [Acceptance Link] no later than [Acceptance Deadline].
            Submit Documents: Provide the necessary documents, including [List of Documents], by [Document Submission Deadline].
            Payment of Fees: Complete the payment of your tuition fees by [Payment Deadline]. Please refer to the attached document for the fee structure and payment options.
            For any queries or further assistance, please do not hesitate to contact our admissions office at [Contact Information] or visit our [Institution's Website].

            We are excited to welcome you to [Institution Name] and look forward to supporting your academic journey.

            Warm regards,

            Institute HOD..



 """
            from_email = os.getenv('EMAIL_HOST_USER')
            recipient_list = [f'{self.email}']
            send_mail(subject, message, from_email, recipient_list)

           
        super(StudentProfile, self).save(*args, **kwargs)

