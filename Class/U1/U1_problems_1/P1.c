//TODO --> Demostrate integer data types.



#include <stdio.h>
#include <limits.h>

//! Primary Data type which belongs to integer domain

// size in bytes, maximum value, minimum value
// Overflow and underflow - warnings / errrors

// char - signed, unsigned
// short - signed, unsigned
// int - signed, unsigned
// long - signed, unsigned

// long long - signed, unsigned - Not in original

//! constants, vaariables

// variables - number
// _,A34 - allowed
// int, 678 - Not allowed (keywords and integers)



//!----------------
/*
char Section1 = 'A';
unsigned char Section2 = 'H';

// int Section1 =100; //!--> This gives conflictiong types error

int main()
{
    printf("\n\nSize of signeed character -->%ld", sizeof(signed char));
    printf("\nSize of Section1 in bytes -->%ld", sizeof(Section1));
    
    printf("\n\nSize of unsigneed character -->%ld", sizeof(unsigned char));
    printf("\nSize of Section2 in bytes -->%ld", sizeof(Section2));

    printf("\n\nMinimum value of signed character in bytes --> %ld", CHAR_MIN);
    printf("\nMaximum value of signed character in bytes --> %ld", CHAR_MAX);

    char Threshold1 = CHAR_MIN - 1; //! Gives overflow warning
    char Threshold2 = CHAR_MAX +1; //! Gives overflow warning

    printf("\n\nValue of threshold1 is -->%d", Threshold1);
    printf("\n\nValue of threshold2 is -->%d", Threshold2);

    printf("\n\n GLOBAL VARIABLE : %c", Section1);
    int Section1 = 100;
    printf("\n LOCAL VARIABLE : %d", Section1);

    return 0;
}
*/



//!----------------------
/*
short Section1 = 'A';
unsigned short Section2 = 'H';

int main()
{
    printf("\n\nSize of signed short -->%ld", sizeof(signed short));
    printf("\nSize of Section1 in bytes -->%ld", sizeof(Section1));
    
    printf("\n\nSize of unsigneed short -->%ld", sizeof(unsigned short));
    printf("\nSize of Section2 in bytes -->%ld", sizeof(Section2));

    printf("\n\nMinimum value of signed short in bytes --> %ld", SHRT_MIN);
    printf("\nMaximum value of signed short in bytes --> %ld", SHRT_MAX);

    return 0;
}
*/
