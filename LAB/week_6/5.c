#include <stdio.h>

void result(int *marks, int s, int *pAss, int *fail) 
{
    *pAss = 0;
    *fail = 0;

    for (int i = 0; i < s; i++) 
    {
        if (marks[i] >= 40) 
            (*pAss)++;
        else
            (*fail)++;
    }
}

int main() 
{
    int s;

    printf("\n\nEnter the number of students: ");
    scanf("%d", &s);

    int marks[s];

    printf("Enter the marks of %d students with a space between : ", s);
    for (int i = 0; i < s; i++) 
    {
        scanf("%d", &marks[i]);
    }

    int pAss, fail;

    result(marks, s, &pAss, &fail);

    printf("Number of students passed: %d\n", pAss);
    printf("Number of students failed: %d\n\n\n", fail);

    return 0;
}