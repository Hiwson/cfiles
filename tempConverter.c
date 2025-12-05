// simple temperature converter
#include <stdio.h>
#include <math.h>

int main(){
   printf("\tTemperature conversion console\n");
   printf("\tConversion options:\n\t1. °c to °F\n\t2. °F to °c\n");

   printf("Enter your conversion option....\t");
   int opt;
   scanf("%i",&opt);

   while (opt > 2 || opt <= 0){
	printf("\nInvalid option!!\n");
	printf("Conversion options:\n\t1. °c to °F\n\t2. °F to °c\n");
	printf("Enter your conversion option....\t");
	scanf("%i",&opt);
   }

   float val;
   float ans;
   printf("\nEnter the values to convert.....\t");
   scanf("%f",&val);
   printf("The value is %f ",val);
   if (opt == 2){
	ans = floor((val - 32) * 5/9);
	printf("Answer is %2f °c",ans);

   }else{
	ans = floor((val * 9/5) + 32);
	printf("Answer is %2f °F",ans);
   }
   return 0;
}
