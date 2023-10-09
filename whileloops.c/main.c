#

#include <stdio.h>

int main()
{
int number;
printf("Enter your number: ");
scanf("%d",&number);

int count;
printf("Enter your count: ");
scanf("%d", &count);

while (count < 10)
{
    int product = number * count;
    printf("%d*%d=%d \n",number, count,product);
    count ++;

}
}
