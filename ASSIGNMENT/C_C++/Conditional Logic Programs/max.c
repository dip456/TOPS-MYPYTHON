#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("please enter value of a:");
	scanf("%d",&a);
	
	printf("please enter value of b:");
	scanf("%d",&b);
	
	printf("please enter value of c:");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("a is a maxx");
	}
	else if (a<b && b>c){
		printf("b is a max");
	}
	else if (a<c && b<c){
		printf("c is maxx");
	}
	else{
		printf("all are same value...!");
	}
	}
