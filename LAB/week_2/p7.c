#include <stdio.h>

int main() 
{
    int number, hundreds, tens, ones;

    printf("\n\nEnter a 3-digit number : ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number / 10) % 10;
    ones = number % 10;

    printf("\n%d\t%d\t%d\n\n", hundreds, tens, ones);

    return 0;
}