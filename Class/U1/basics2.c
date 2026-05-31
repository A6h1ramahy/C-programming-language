#include<stdio.h>
#include<limits.h>
int main()
{
    printf("\n\nInteger Size in bytes --> %ld", sizeof(int)); //! %ld ??????
    printf("\n\nThe minimum Range of int --> %d ", INT_MIN);
    printf("\n\nThe maximum Range of int --> %d ", INT_MAX);
    printf("\n\nInteger Size in bytes --> %ld", sizeof(unsigned int));
    printf("\n\nMaximum Value of unsigned int --> %u \n\n", UINT_MAX);

    printf("---------------------------------");

    printf("\n\nCharacter Size in bytes --> %ld", sizeof(char)); 
    printf("\n\nThe minimum Range of char --> %d ", CHAR_MIN);
    printf("\n\nThe maximum Range of char --> %d ", CHAR_MAX);
    printf("\n\nCharacter Size in bytes --> %ld", sizeof(unsigned char));
    printf("\n\nMaximum Value of unsigned char --> %d \n\n", UCHAR_MAX);

    printf("---------------------------------");

    printf("\n\nInteger Size in bytes --> %ld", sizeof(int));
    printf("\n\nValue Size of int --> %d \n\n", sizeof(12));
    
    printf("---------------------------------");

    printf("\n\nFloat Size in bytes --> %ld", sizeof(float));
    printf("\n\ndouble Size in bytes --> %ld", sizeof(double));
    printf("\n\nValue Size of int --> %d \n\n", sizeof(12.56));
    return 0;
}




/*
Expressions
Numbers - Integer numbers,
            short , int , long
            constant
            vairables
                Airthmetic - <lvalue>=<rvaluee>
                    Homogeneous
                        <lvalue =<rvalue of the same types>
                            10 = 20 + 30; //invalid
                            <int Variable> = <int Expression>
                    Heterogeneous
                        <int Variable> = <short Expression>
        - Real numbers,
            
            constant
            vairables
                Airthmetic - <lvalue>=<rvaluee>
                Homogeneous
                
                Heterogeneous*/