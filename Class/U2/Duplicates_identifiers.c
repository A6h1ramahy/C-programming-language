#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int NumberArray[] = {};

int main()
{
    int length,element,duplicate=0;
    printf("\n\nEnter the number of length in the array : ");
    scanf("%d",&length);
    printf("\n");

    for (int i = 0 ; i<length ; i++)
    {
        printf("Enter the number %d of array : ",i+1);
        scanf("%d",&element);
        NumberArray[i] = element;
    }

    printf("\n\nEntered array is : ");
    for (int j = 0 ; j<length ; j++)
    {
        printf("%d ",NumberArray[j]);
    }

    //sorting 
    for (int y=0 ; y<length-1 ; y++)
    {
        for (int z=0; z<length-y-1 ; z++)
        {
            if (NumberArray[z]>NumberArray[z+1])
            {
                int a=NumberArray[z+1];
                NumberArray[z+1]=NumberArray[z];
                NumberArray[z]=a;
            }
        }
    }
    //qsort can be used (stdlib)(campare function need to be defined)

    printf("\n\nSorted array is : ");
    for (int j = 0 ; j<length ; j++)
    {
        printf("%d ",NumberArray[j]);
    }

    for(int k = 0 ; k<length ; k++)
    {
        if (NumberArray[k] == NumberArray[k+1])
        duplicate++;
    }

    printf("\n\nThe number of duplicates in the entered elements is : %d",duplicate);

    return 0;
}