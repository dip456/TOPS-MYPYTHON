# Generated by Django 5.0.6 on 2024-05-30 05:10

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('Myproduct', '0003_alter_product_options'),
    ]

    operations = [
        migrations.DeleteModel(
            name='ProductAdminModel',
        ),
        migrations.AlterModelOptions(
            name='product',
            options={},
        ),
    ]
