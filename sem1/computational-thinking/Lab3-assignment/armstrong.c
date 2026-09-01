#include <stdio.h>

int main() {
    int userInput, userCopy;
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &userInput);
    userCopy = userInput;
    int sum = 0;
    int numDigits = 0;

    while(userCopy > 0) {
        userCopy = userCopy / 10;
        numDigits++;
    }

    userCopy = userInput;
    int productOfCurrDigit = 1;
    
    while(userCopy > 0){
        int currDigit = userCopy % 10;
        userCopy /= 10;
        for(int i = 0; i < numDigits; i++){
            productOfCurrDigit *= currDigit;
        }
        sum += productOfCurrDigit;
        productOfCurrDigit = 1;
    }

    if(sum == userInput) {
        printf("%d is an Armstrong number.\n", userInput);
    } else {
        printf("%d is not an Armstrong number.\n", userInput);
    }
    return 0;
}