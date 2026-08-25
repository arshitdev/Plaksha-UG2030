#include <stdio.h>

int main() {
    int marks, attendence;
    printf("Enter your marks and percentage: ");
    scanf("%d %d", &marks, &attendence);
    if(marks >= 40 && attendence >= 75) {
        printf("You are eligible.\n");
    } else {
        printf("You are not eligible.\n");
    }
}