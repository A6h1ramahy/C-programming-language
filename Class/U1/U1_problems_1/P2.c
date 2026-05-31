//TODO --> FINDING SUM OF 2 NUMBERS (INCLUDING ADDRESS)




#include <stdio.h>
int main()
{
    float a , b ;

    printf("\n\n Enter the first number : ");
    scanf("%f",&a);
    printf(" Enter the second number : ");
    scanf("%f",&b);

    //!ADDRESS OF TEMPORARY VARIABLES AND CONSTANTS ARE NOT POSSIBLE

    printf("\nAddress of first number : %p",&a);
    printf("\nEntered first value : %f",a);
    printf("\nAddress of second number : %p",&b);
    printf("\nEntered second value : %f",b);
    printf("\n\nThe sum of both numbers : %.2f\n\n", a+b);
}