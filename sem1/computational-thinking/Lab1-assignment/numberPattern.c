#include <stdio.h>

int main() {
    int input1, input2, input3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &input1, &input2, &input3);
    printf("%d\n",input1);
    printf("%d \t %d\n",input2,input2);
    printf("%d \t %d \t %d\n",input3,input3,input3);
    return 0;
}