#include <stdio.h>
#include <math.h>

int main() 
{
    double P, R, T, CI;

    printf("\n\nEnter the principle amount: ");
    scanf("%lf", &P);

    printf("Enter the interest rate: ");
    scanf("%lf", &R);

    printf("Enter the time period: ");
    scanf("%lf", &T);

    CI = P * (pow(1 + R / 100, T)) - P;

    printf("\nThe compound interest is: %.2lf\n\n", CI);

    return 0;
}