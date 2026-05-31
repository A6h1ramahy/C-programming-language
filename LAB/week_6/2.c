#include <stdio.h> 
 
int isEven(int num) { 
    return num % 2 == 0; 
} 
 
int main() 
{ 
    int n; 
    printf("\n\nEnter an integer : "); 
    scanf("%d", &n); 
 
    if (isEven(n)) 
        printf("The number is even.\n\n\n"); 
    else 
        printf("The number is odd.\n\n\n");

    return 0;
}