#include <stdio.h>
int main(void)
{
char ch;
printf("Enter any character: \n");
scanf("%c", &ch);

if(ch >= 'A' && ch <= 'Z')
{
printf(" '%c' is uppercase alphabet.", ch);
}
else if(ch >= 'a' && ch <= 'z')
{
printf(" '%c' is lowercase alphabet.", ch);
}
else if(ch >= '0' && ch <= '9')
{
printf(" '%c' is digit.", ch);
}
else{
printf(" '%c' is special character.", ch);
}
return 0;
}