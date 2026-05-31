#include <stdio.h>

int main() 
{
    int num, lastdigit;

    printf("\n\nEnter an integer : ");
    scanf("%d", &num);

    lastdigit = num % 10;
    printf("\nThe last digit of the number is : %d\n\n", lastdigit);

    return 0;
}