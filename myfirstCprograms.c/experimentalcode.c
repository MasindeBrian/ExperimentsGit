#include <stdio.h>
#include <stdlib.h>

int main()
{
int temperature;
printf("enter your temperature: ");
scanf("%d" , &temperature );

if (temperature <= 10 )
    { printf("it is extremely cold today "); }
else if(temperature <=20  )
    {printf("it is a bit cold today ");}
else if (temperature <=30 )
   {
     printf("it is a bit hot today");
   }
else {printf("it is extremely hot today ");}

}

