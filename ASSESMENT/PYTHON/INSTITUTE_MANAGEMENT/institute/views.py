from django.shortcuts import render,redirect,get_object_or_404
from django.contrib.auth import logout
from django.contrib import messages

from .models import Student,Teacher
from .models import Book ,HodModel

# Create your views here.
def base_page(request):
    return render(request,'institute/base.html')

def login_page(request):
    if request.method == 'POST':
        hod_id_ = request.POST['hod_id']
        password_ = request.POST['password']

        try:
            get_hod = HodModel.objects.get(hod_id=hod_id_)

            if get_hod.password == password_:
                messages.success(request, f'Hello {get_hod.first_name} {get_hod.last_name}, Now your are logged in.')
                response = redirect('dashboard')
                response.set_cookie('hod_id', get_hod.hod_id)
                response.set_cookie('hod_name', f'{get_hod.first_name} {get_hod.last_name}')
                return response
            else:
                messages.error(request, 'Employee ID or Password does not match.')
                return redirect('login_page')
        except HodModel.DoesNotExist:
            messages.error(request, 'Employee does not exist.')
            return redirect('login_page')
        except Exception as err:
            messages.error(request, f'ERROR : {err}')
            return redirect('login_page')

    return render(request,'institute/login.html')
def dashboard_page(request):
    students = Student.objects.count()
    teachers = Teacher.objects.count()
    books = Book.objects.count()
    context =  {
        'students': students,
        'teachers': teachers,
        'books': books
    }
    return render(request,'institute/dashboard.html',context)



def add_student(request):
    if request.method == 'POST':
        first_name = request.POST.get('first_name')
        last_name = request.POST.get('last_name')
        course = request.POST.get('course')
        age = request.POST.get('age')
        email = request.POST.get('email')
        
        if first_name and last_name and course and age and email:
            try:
                Student.objects.create(
                    first_name=first_name,
                    last_name=last_name,
                    course=course,
                    age=int(age),
                    email=email
                )
                messages.success(request, 'Student added successfully')
            except Exception as e:
                messages.error(request, f'Error: {e}')
        else:
            messages.error(request, 'All fields are required')
        return redirect('dashboard_page')
    return render(request, 'institute/add_student.html')


def show_students(request):
    students = Student.objects.all()
    context = {
        'students': students
        }
    return render(request, 'institute/show_students.html',context)

def edit_student(request, student_id):
    student = get_object_or_404(Student, id=student_id)
    if request.method == 'POST':
        student.first_name = request.POST.get('first_name')
        student.last_name = request.POST.get('last_name')
        student.course = request.POST.get('course')
        student.age = request.POST.get('age')
        student.email = request.POST.get('email')
        student.save()
        messages.success(request, 'Student updated successfully')
        return redirect('show_students')
    context = {
            'student': student
            }
    return render(request, 'institute/edit_student.html',context)

def delete_student(request, student_id):
    student = get_object_or_404(Student, id=student_id)
    student.delete()
    messages.success(request, 'Student deleted successfully')
    return redirect('show_students')


#teachers view
def add_teacher(request):
    if request.method == 'POST':
        first_name = request.POST.get('first_name')
        last_name = request.POST.get('last_name')
        age = request.POST.get('age')
        subject = request.POST.get('subject')
        class_study = request.POST.get('class_study')
        
        if first_name and last_name and age and subject and class_study:
            try:
                Teacher.objects.create(
                    first_name=first_name,
                    last_name=last_name,
                    age=int(age),
                    subject=subject,
                    class_study=class_study
                )
                messages.success(request, 'Teacher added successfully')
            except Exception as e:
                messages.error(request, f'Error: {e}')
        else:
            messages.error(request, 'All fields are required')
        return redirect('dashboard_page')
    return render(request, 'institute/add_teacher.html')

def show_teachers(request):
    teachers = Teacher.objects.all()
    context = {
        'teachers': teachers
        }
    return render(request, 'institute/show_teachers.html',context )

def edit_teacher(request, teacher_id):
    teacher = get_object_or_404(Teacher, id=teacher_id)
    if request.method == 'POST':
        teacher.first_name = request.POST.get('first_name')
        teacher.last_name = request.POST.get('last_name')
        teacher.age = request.POST.get('age')
        teacher.subject = request.POST.get('subject')
        teacher.class_study = request.POST.get('class_study')
        teacher.save()
        messages.success(request, 'Teacher updated successfully')
        return redirect('show_teachers')
    context =  {
        'teacher': teacher
        }
    return render(request, 'institute/edit_teacher.html',context)

def delete_teacher(request, teacher_id):
    teacher = get_object_or_404(Teacher, id=teacher_id)
    teacher.delete()
    messages.success(request, 'Teacher deleted successfully')
    return redirect('show_teachers')


def add_book(request):
    if request.method == 'POST':
        title = request.POST.get('title')
        author = request.POST.get('author')
        
        if title and author:
            try:
                Book.objects.create(
                    title=title,
                    author=author,
                )
                messages.success(request, 'Book added successfully')
            except Exception as e:
                messages.error(request, f'Error: {e}')
        else:
            messages.error(request, 'All fields are required')
        return redirect('dashboard_page')
    return render(request, 'institute/add_book.html')

def show_books(request):
    books = Book.objects.all()
    context = {
        'books': books
        }
    return render(request, 'institute/show_books.html',context )

def edit_book(request, book_id):
    book = get_object_or_404(Book, id=book_id)
    if request.method == 'POST':
        book.title = request.POST.get('title')
        book.author = request.POST.get('author')
        book.save()
        messages.success(request, 'Book updated successfully')
        return redirect('show_books')
    context =  {
        'book': book
                }
    return render(request, 'institute/edit_book.html',context)

def delete_book(request, book_id):
    book = get_object_or_404(Book, id=book_id)
    book.delete()
    messages.success(request, 'Book deleted successfully')
    return redirect('show_books')

def logout_view(request):
    logout(request)
    return redirect('login_page')

