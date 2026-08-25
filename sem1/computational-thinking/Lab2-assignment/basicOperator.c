#include <stdio.h>

int main() {
    int a, b, sum, difference, product, quotient, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    remainder = a%b;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}