	//SIMPLE NUMBER GUESING GAME
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void numGen(){
     int guess;
     printf(" => Guess a number between 300 and 400....");
     scanf("%i",&guess);
     while( guess < 300 || guess > 400){
      printf("\n ×× Your guess number is out of range\n");
      printf(" => Guess a number between 300 and 400....");
      scanf("%i",&guess);
     }
}
int main(){
    printf("............Number guessing console.............\n");
    numGen();
    srand(time(NULL));
    int luckyNo;
    luckyNo = rand();
    luckyNo = luckyNo / 10000000;
    printf(" => lucky number is %i\n",luckyNo);
}
