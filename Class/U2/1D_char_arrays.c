#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

char CharArray[] = "PESU"; //! The dimension mentioning is not required where it autommatically fetches the size of string
//char CharArray[] = {'P','E','S','U'}; //! Same as the above.....

int main()
{
    for(int i=0;i<4;i++)
    {
        printf("\nValue of CharArray[%d] --> %c",i,CharArray[i]);
    }
    printf("\n-----\n");
    
    
    printf("\nValue of CharArray[4] --> %c\n",CharArray[4]);// Error doesnot occur gives empty
    printf("\n-----\n");
    
    
    /*
    There is nothing called string in c...
    strings are immutable
    so it is converted to arrays and can be edited
    */
   //! ARRAYS ARE MUTABLE (LIKE LISTS)
   
   CharArray[2]='A';
   for(int i=0;i<4;i++)
   {
       printf("\nValue of CharArray[%d] --> %c",i,CharArray[i]);
    }
    printf("\n-----\n");
    
    
    CharArray[4]='Z';
    printf("\n\nValue of CharArray[4] --> %c\n",CharArray[4]);
    printf("\n-----\n");
    //This is allowed to assign or extend


    return 0;
}