from django.shortcuts import render,redirect,get_object_or_404
from django.contrib import messages
from django.contrib.auth.models import User
from django.http import HttpResponse
from functools import wraps


from .models import productAdminModel
from .models import Product
from .models import ProductSubCat
from .forms import ProductForm
from .forms import ProductSubCatForm

def login_required(view_func):
    @wraps(view_func)
    def _wrapped_view(request, *args, **kwargs):
        if request.COOKIES.get('adminn_id') and request.COOKIES.get('admin_name'):
            return view_func(request, *args, **kwargs)
        else:
            return redirect('adm_login_view')
    return _wrapped_view


def adm_login_view(request):
    if request.method == 'POST':
        adminn_id_ = request.POST['adminn_id']
        password_ = request.POST['password']

        try:
            get_admin = productAdminModel.objects.get(adminn_id=adminn_id_)

            if get_admin.password == password_:
                messages.success(request, f'Hello {get_admin.first_name} {get_admin.last_name}, Now your are logged in.')
                response = redirect('product_subcat_list')
                response.set_cookie('adminn_id', get_admin.adminn_id)
                response.set_cookie('admin_name', f'{get_admin.first_name} {get_admin.last_name}')
                return response
            else:
                messages.error(request, 'admin ID or Password does not match.')
                return redirect('adm_login_view')
        except productAdminModel.DoesNotExist:
            messages.error(request, 'admin does not exist.')
            return redirect('adm_login_view')
        except Exception as err:
            messages.error(request, f'ERROR : {err}')
            return redirect('adm_login_view')

    return render(request, 'Myproduct/login.html')




# Create your views here.
@login_required
def add_product(request):
    if request.method == "POST":
        form = ProductForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('product_list')
    else:
        form = ProductForm()
        context = {
            'form':form
        }
    return render(request, 'Myproduct/add_product.html', context)

@login_required
def product_list(request):
    products = Product.objects.all()
    context = {
        'products': products
    }
    return render(request, 'Myproduct/product_list.html',context)


@login_required
def add_product_subcat(request):
    if request.method == "POST":
        form = ProductSubCatForm(request.POST, request.FILES)
        if form.is_valid():
            form.save()
            return redirect('product_subcat_list')
    else:
        form = ProductSubCatForm()
        context = {
            'form': form
        }
    return render(request, 'Myproduct/add_product_subcat.html', context)

def product_subcat_list(request):
    subcats = ProductSubCat.objects.all()
    query = request.GET.get('q')
    if query:
        subcats = subcats.filter(product__product_name__icontains=query)
    
    context = {
        'subcats': subcats,
        'query': query,
    }
    return render(request, 'Myproduct/product_subcat_list.html', context)


@login_required
def product_update(request, pk):
    product = get_object_or_404(Product, pk=pk)
    if request.method == "POST":
        form = ProductForm(request.POST, instance=product)
        if form.is_valid():
            form.save()
            return redirect('product_list')
    else:
        form = ProductForm(instance=product)
        context = {
            'form': form
        }
    return render(request, 'Myproduct/edit_product.html',context)


@login_required
def edit_product_sub_category(request, pk):
    product_sub_cat = get_object_or_404(ProductSubCat, pk=pk)
    if request.method == 'POST':
        form = ProductSubCatForm(request.POST, instance=product_sub_cat)
        if form.is_valid():
            form.save()
            return redirect('product_subcat_list')
    else:
        form = ProductSubCatForm(instance=product_sub_cat)
        context = {
            'form': form
        }
    return render(request, 'Myproduct/edit_subcate.html',context)

@login_required
def delete_category(request, pk):
    product_sub_cat = get_object_or_404(ProductSubCat, pk=pk)
    product_sub_cat.delete()
    return redirect('product_subcat_list')








 