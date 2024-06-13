from django.shortcuts import render,redirect
from django.contrib import messages


from .models import StudentProfile


# Create your views here.
def student_login_view(request):
        if request.method == 'POST':
            student_id_ = request.POST['student_id']
            password_ = request.POST['password']

            try:
                get_student = StudentProfile.objects.get(student_id=student_id_)

                if get_student.password == password_:
                    messages.success(request, f'Hello {get_student.first_name} {get_student.last_name}, Now your are logged in.')
                    response = redirect('student_profile_page')
                    response.set_cookie('student_id', get_student.student_id)
                    response.set_cookie('student_name', f'{get_student.first_name} {get_student.last_name}')
                    return response
                else:
                    messages.error(request, 'Student ID or Password does not match.')
                    return redirect('student_login_view')
            except StudentProfile.DoesNotExist:
                messages.error(request, 'Student does not exist.')
                return redirect('student_login_view')
            except Exception as err:
                messages.error(request, f'ERROR : {err}')
                return redirect('student_login_view')
            
        return render(request,'student/student_login.html')
    
    
def student_profile_page(request):
    return render(request,'student/student_profile.html')    

def forgot_password_view(request):
    get_student = StudentProfile.objects.get(student_id=request.COOKIES.get('student_id'))
    
    if request.method == 'POST':
        old_password_ = request.POST['old_password']
        new_password_ = request.POST['new_password']
        confirm_password_ = request.POST['confirm_password']

        if  old_password_ != get_student.password :
            messages.error(request, 'Old password is incorrect.')
            return redirect('forgot_password_view')

        if new_password_ != confirm_password_:
            messages.error(request, 'New password and confirm password do not match.')
            return redirect('forgot_password_view')

        get_student.password = new_password_
        get_student.save() 

        response = redirect('student_login_view')  # Redirect to login or another appropriate page
        response.set_cookie('student_id', get_student.student_id)
        response.set_cookie('password', get_student.password)

        messages.success(request, 'Your password has been updated successfully!')
        return redirect('student_login_view')     

    return render(request, 'student/stud_forgot_password.html')
