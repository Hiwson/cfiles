//simple unit converter script
#include <stdio.h>
#include <string.h>

int main(){
	printf("\nWelcome to conversion console fr!!!\n");
	printf("You can convert; \n 1. KG-G\n 2. KM-M\n 3. USD-KSH\n");
	//printf("What do you want to convert,(1,2 or 3)???\n");
	int option;
	
	//ensuring that the right option is picked
	do{
	printf("Please choose between 1,2 & 3\n");
	printf("What do you want to convert,(1,2 or 3)???\n");
        scanf("%i",&option);
        printf("%d\n",option);
	}while(option > 3 || option == 0);

	char choice[30];
	float value;
	float ans;
         printf("Enter your values....\t");
         scanf("%f",&value);
	if(option == 1 ){
	  printf("Is it Kg-g or g-kg? Please specify..(type)\t\n ");
	 // fgets(choice, sizeof(choice), stdin);
	  scanf("%s",&choice);
	  //printf("%s\n",choice);
	}/*else if(option == 2){
	  printf("Is it km-m or m-km? Please specify..(type)\t");
	  scanf("%s",&choice);
	}*/
	if(strcmp(choice,"kg to g") == 0 || strcmp(choice,"kg") == 0 || strcmp(choice,"kg-g") == 0){
	  ans = value * 1000;
	  printf("%1f kg = %1f g\n",value,ans);
         }else if(strcmp(choice,"g") == 0 || strcmp(choice,"g-kg") == 0 || strcmp(choice,"g to kg") == 0){
	  ans = value / 1000;
	  printf("%1f g = %1f kg\n",value,ans);
	 }else{
	    do{
	    printf("sorry we don't convert that fr\n");
	     printf("Is it Kg-g or g-kg? Please specify..(type)...\t");
             scanf("%s",&choice);
	   }
	   while(strcmp(choice,"kg to g")==1 || strcmp(choice,"g to kg")==1 || strcmp(choice,"kg")==1 || strcmp(choice,"g-kg") == 1 || strcmp(choice,"kg") == 1);
	 }

	/*if(option == 1 || option == 2 || option == 3){
	  printf("Enter your values....\t");
	  scanf("%f",&value);
	}*/
	
	return 0;
}
