// 2.	Write a program to print the count of odd numbers in a given range.
//  The lower and upper values in the range will be given as input.
#include <stdio.h>

int main()
{
    int a,b;

    printf("\n\nEnter the lower value : ");
    scanf("%d",&a);
    printf("Enter the upper value : ");
    scanf("%d",&b);

    int c = 0;

    for (int i=a; i<=b; i++)
    {
        if (i%2!=0)
        {
            c++;
        }
    }

    printf("\nThe total odd number count between %d and %d is %d\n\n",a,b,c);

    return 0;
}