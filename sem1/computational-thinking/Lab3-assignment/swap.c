#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a = a^b;
    b = a^b;
    a = a^b;

    printf("After swapping: %d, %d\n", a, b);

    return 0;
}