#include <stdio.h>
#include <math.h>

void calcArea(){
    float radius;
    printf("What is the radius of your pitch:...\n");
    scanf("%f",&radius);

    float area;
    area = 3.14* radius * radius;
    printf("The area of the pitch is %.2f ",area);
    }
    
int main(){
    calcArea();
    return 0;
    }
