#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    printf("Outside");
    {
        {
            printf("Between");
        }
        printf("Inside");
    }
    return 0;
}
//! First block is named and other are not named