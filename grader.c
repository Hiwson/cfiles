#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks.....\t");
    scanf("%i",&marks);
    printf("Marks are: %i\n",marks);
    switch(marks){
    case  25:
    printf("Marks are %i  and grade is: E\n",marks);
    break;
    case  50:
    printf("Marks are %i  and grade is: C\n",marks);
    break;
    case  75:
    printf("Marks are %i  and grade is: B\n",marks);
    break;
    case  100:
    printf("Marks are %i  and grade is: A\n",marks);
    }
return 0;

}
