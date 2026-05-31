#include <stdio.h>

void swap(int *a, int *b) 
{
    int s = *a;
    *a = *b;
    *b = s;
}

int main() {
    int n1, n2;

    printf("\n\nEnter two integers n1 and n2 with a space between : ");
    scanf("%d %d", &n1, &n2);

    printf("Before : n1 = %d, n2 = %d\n", n1, n2);

    swap(&n1, &n2);

    printf("After : n1 = %d, n2 = %d\n\n\n", n1, n2);

    return 0;
}