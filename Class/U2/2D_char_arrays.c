#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

// char ctarr[3][3]; -->VALID

// char ctarr[3][3] = "Hello"; -->ERROR
// char xtarr[][]; -->ERROR
char ctarr[3][3] = {{'a','b','c'},{'d','e','f'},{'g','h','i'}}; //--> VALID


int main()
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%c ",ctarr[i][j]);
            // printf("%p\n\n",ctarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}