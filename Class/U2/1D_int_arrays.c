#include <stdio.h>

int OneDarray[5]; //All elements value is zero
// One dimensional array
//! The initialization of array must be out of int main(). Or else we get other output

// int OneDarray[5] = 100; --> this is invalid (We cannot intialize like this)
// int OneDarray[5] = {}; -->Correct initializing
// int OneDarray[5] = {1}; --> The first element will be 1 and other will be 0
// int OneDarray[5] = {1,2}; --> The first 2 elements will be valued other will  be zero
// int OneDarray[] = {}; --> Allowed
// int OneDarray[] = {1,2}; --> Allowed //?(Dimensions mentioning is not compulsory)
// int OneDarray[]; --> Warning appears (not allowed)

/*
int n = 5;
int OneDarray[n];
*/ //!This is not allowed....... Error occurs
//! inside main we can do this

int main()
{
    // int OneDarray[] = {1,2,3}; //Here at starting some garbage values are assigned to the array.
    printf("\nAddress of OneDarray --> %p", &OneDarray);
    printf("\nAddress of OneDarray --> %p", OneDarray);
    printf("\n-----\n");
    /*This says that address or memory of variable or arrays is same*/
    
    
    for (int i=0;i<5;i++)
    {
        printf("\n\nAddress of OneDarray[%d] --> %p", i,&OneDarray[i]);
        printf("\nValue of OneDarray[%d] --> %d", i,OneDarray[i]);
    }
    printf("\n-----\n");
    /*Initial value will be zero if no values are assigned to arrays*/


    printf("\n\nAddress of OneDarray[5] --> %p", &OneDarray[5]);
    printf("\nValue of OneDarray[5] --> %d\n\n\n", OneDarray[5]);
    printf("\n-----\n");
    /*No error bcz compiler doesnot check the bounding conditions. Programmer must be responsible in this stuff*/
    
    for (int i=0;i<5;i++)
    {
        OneDarray[i]=i;
        printf("\n\nAddress of OneDarray[%d] --> %p", i,&OneDarray[i]);
        printf("\nValue of OneDarray[%d] --> %d", i,OneDarray[i]);
    }
    printf("\n-----\n");

    
    OneDarray[5] = 10;
    printf("\nValue of OneDarray[5] --> %d\n", OneDarray[5]);
    printf("\n-----\n");
    //Assigning the value for out of boundary is also possible.

    return 0;
}




