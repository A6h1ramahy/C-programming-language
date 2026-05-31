# include <stdio.h>
# include <limits.h>
int main()
{
    int X;
    long long Y;
    printf("\n\nEnter the value of X : ");
    scanf("%d",&X);

    printf("Enter the value of Y : ");
    scanf("%lld",&Y);

    printf("\nX + INT_MIN = %d", X+INT_MIN);
    printf("\nY + LLONG_MIN = %lld\n\n", Y+LLONG_MIN);

    return 0;
}