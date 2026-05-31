#include <stdio.h>
#include <math.h>

int main() 
{
    int choice;
    float radius, length, width, base, height, area;

    printf("\n\nSelect a geometric shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1, 2, or 3) : ");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("\nEnter the radius of the circle : ");
        scanf("%f", &radius);

        area = 3.14 * radius * radius;

        printf("\nThe area of the circle is: %.2f\n\n", area);
    }

    else if (choice==2)
    {
        printf("\nEnter the length and width of the rectangle with a space in between : ");
        scanf("%f %f", &length, &width);

        area = length * width;

        printf("\nThe area of the rectangle is: %.2f\n\n", area);   
    }

    else if (choice==3)
    {
        printf("\nEnter the base and height of the triangle with a sapc in between : ");
        scanf("%f %f", &base, &height);

        area = 0.5 * base * height;

        printf("\nThe area of the triangle is: %.2f\n\n", area);
    }

    else
    {
        printf("\nINVALID INPUT\n\n");
    }

    return 0;
}