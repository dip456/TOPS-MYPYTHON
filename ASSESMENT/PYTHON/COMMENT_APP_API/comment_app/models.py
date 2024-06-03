from django.db import models

# Create your models here.

# Create your models here.
class MyComment(models.Model):
    post_id = models.CharField(max_length=100)
    name = models.CharField(max_length=100)
    email = models.EmailField(max_length=13)
    body = models.CharField(max_length=100)

    def __str__(self):
        return self.body