#include <stdio.h>
int main()
{
    int a ;
    printf("\n\nEnter a positive number to count its digit : ");
    scanf("%d",&a);
    while (1){
        if (a<1)
        {
            printf("\n\nINVALID INPUT\nEnter a positive number to count its digit : ");
            scanf("%d",&a);
        }
        else
        {
            break;
        };
    };
    int b = 0;
    while (1){
        if (a<10)
        {
            b++;
            break;
        }
        else
        {
            a = a/10;
            b++;
        }
    }
    printf("\nThe number of digits in the entered number is : %d\n\n",b);
    return 0;
}
