#include <stdio.h>

void calculateSquare(int *num) 
{
    *num = (*num) * (*num);
}

int main() 
{
    int n;

    printf("\n\nEnter an integer : ");
    scanf("%d", &n);

    calculateSquare(&n);

    printf("The Square is : %d\n\n\n", n);

    return 0;
}