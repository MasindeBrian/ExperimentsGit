#include <stdio.h>
#include <stdlib.h>

int main()
{
char operator;
printf("choose your operator['+','-','/','*']: ");
scanf("%c",&operator);

int num1,num2;
printf("first value: ");
scanf("%d",&num1);
printf("second value: ");
scanf("%d",&num2);


switch(operator)
{case '+' :
    printf("%d",num1 + num2);
    break;
case '-' :
    printf("%d",num1 - num2);
    break;
case '/' :
    printf("%d",num1 / num2);
    break;
case '*' :
    printf("%d",num1 * num2);
    break;
}
}
