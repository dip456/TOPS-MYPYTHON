#include<stdio.h>
int main()
{
	int a,b,result;
	
	printf("please enter value of a:");
	scanf("%d",&a);
	
	printf("please enter value of b:");
	scanf("%d",&b);
	
	result=a+b;
	printf("sum of a and b is:%d\n\n",result);
	
	result=a-b;
	printf("sub of a and b is:%d\n\n",result);
	
	result=a*b;
	printf("multiplication of a and b is :%d\n\n",result);
	
	result=a/b;
	printf("div of a and b is:%d\n\n",result);
	
	result=a%b;
	printf("modulus of a and b is :%d\n\n",result);

	return 0;
}