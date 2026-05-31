#include <stdio.h>
int main() 
{
    char ch;

    printf("\n\nEnter a character : ");
    scanf("%c", &ch);

    printf("\nThe ASCII value of '%c' is %d\n\n", ch, ch);
    return 0;
}