#include <stdio.h>

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 7 == 0 || num % 10 == 7) {
        printf("%d is a buzz number.\n", num);
    } else {
        printf("%d is not a buzz number.\n", num);
    }
    return 0;
}