/*3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers */

 
#include <stdio.h>
 
void main()
{
    int i, num, odd_sum=0, even_sum=0 ;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}
