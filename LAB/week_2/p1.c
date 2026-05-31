# include <stdio.h>
int main()
{
    int a,b;
    float area;

    printf("\n\nEnter the base of the triangle : ");
    scanf("%d",&a);

    printf("Enter the height of the triangle : ");
    scanf("%d",&b);

    area=0.5*a*b;
    printf("The area of the triangle is : %.2f\n\n", area);

    return 0;
}