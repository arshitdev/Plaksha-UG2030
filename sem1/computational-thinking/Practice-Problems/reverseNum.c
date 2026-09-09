#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int revNum;

    while (n != 0){
        revNum = revNum*10 + (n % 10);
        n /= 10;
    }
    printf("The reversed number is : %d\n", revNum);
    
    return 0;
}