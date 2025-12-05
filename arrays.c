#include <stdio.h>

int main(){

	//creating an array 
    int marks[20] = {20,80,23,55,70,87,65,71};
    printf("My marks are %i\n",marks[5]);
	//changing an item in an array
    marks[0] = 49;
    printf("Changed mark is %i\n",marks[0]);
	//checking array size
    printf("The array has a size of %lu\n",sizeof(marks));
	//2D arrays
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    printf("Value %d is at row 1,column 3\n",matrix[0][2]);
	//looping an array
    int myMatrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i <= 2; i++){
	for(int j=0; j<=2; j++){
            printf("%d",myMatrix[i][j]);
            }
    printf("\n");
    }
    return 0;

}
