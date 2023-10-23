#include <stdio.h>
int main()
{
int secretNumber=9;
int guessCount=0;

while(guessCount<3)
{
int guess;
printf("Guess: ");
scanf("%d",&guess);


if(guess==secretNumber){printf("YOU WIN!");break;}
else{printf("YOU LOSE!!");}

guessCount=guessCount+1;
}
return 0;
}


