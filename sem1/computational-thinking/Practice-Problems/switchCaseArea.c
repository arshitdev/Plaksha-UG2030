#include <stdio.h>

int main() {
    int choice;
    float r, length, width, base, height, area;
    printf("Please enter your choice : \n 1. Circle \n 2. Rectangle \n 3. Triangle \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter radius : \n");
        scanf("%f", &r);
        area = 3.141 * r * r;
        printf("%.4f\n", area);
        break;
    case 2:
        printf("Enter the length and width of the rectangle : \n");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("%.4f\n", area);
        break;
    case 3:
        printf("Enter the base and height of the triangle : \n");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("%.4f\n", area);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}