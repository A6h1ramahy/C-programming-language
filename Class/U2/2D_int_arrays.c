#include <stdio.h>
#include <stdlib.h>

int tdarr[3][3]; //all values = 0


// int tdarr[3][3]={{1,2,3},{4,5,6},{7,8,9}}; -->Correct intialization
// int tdarr[][]; -->Not allowed (Warning appears)
// int tdarr[][] = {{1,3,2},{},{}}; -->ERROR
// int tdarr[][3]; --> WARNING (Allowed)
// int tdarr[][3] = {}; //--> VALID
// int tdarr[][];//-->Error
//! THEREFORE column size is compulsory
//! SYSYTEM REFERS ROWS
//! ROW MAJOR ORDERING

int main()
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d\n",tdarr[i][j]);
            printf("%p\n\n",tdarr[i][j]);
        }
    }
    printf("\nAddress --> %p", tdarr);
    return 0;
}