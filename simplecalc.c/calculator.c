#include <stdio.h>

int main ()
{
char operator;
printf("choose your operator['+','-','/','*']: ");
scanf("%c",&operator);

int num1,num2;
printf("first value: ");
scanf("%d",&num1);
printf("second value: ");
scanf("%d", &num2);

if (operator == '+')
{printf("%d",num1+num2);}
else if (operator == '-')
{printf("%d",num1-num2);}
else if (operator == '/')
{printf("%d",num1/num2);}
else
{printf("%d",num1*num2);}
}
