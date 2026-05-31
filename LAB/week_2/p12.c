#include <stdio.h>

int main() 
{
    double feet, meters;

    printf("\n\nEnter length in feet : ");
    scanf("%lf", &feet);

    meters = feet * 0.3048;

    printf("\nLength in meters : %.4lf\n\n", meters);

    return 0;
}