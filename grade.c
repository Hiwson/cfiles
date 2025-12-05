#include <stdio.h>

int main() {
    int number;
    printf("Enter your number (1 - 100): ");
    scanf("%d", & number);

    if (number < 1 || number > 100) {
   printf("Invalid input! Please enter a number between 1 and 100.\n");
   return 0;
}

    if (number >= 80) {
    printf("Grade: A\n");
    } else if (number >= 70) {
    printf("Grade: B\n");
    } else if (number >= 60) {
    printf("Grade: C\n");
    } else if (number >= 50) {
    printf("Grade: D\n");
    } else {
    printf("Grade: E (Fail)\n");
    }

    return 0;
}
