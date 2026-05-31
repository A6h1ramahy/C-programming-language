#include <stdio.h>

int findMaximum(int *arr, int s) { 
    int max = *arr; 
    for (int i = 1; i < s; i++) 
    { 
        if (*(arr + i) > max) 
        { 
            max = *(arr + i); 
        } 
    } 
    return max; 
} 
 
int main() 
{ 
    int s; 
    printf("\n\nEnter the size of the array : "); 
    scanf("%d", &s); 
 
    int arr[s]; 
    printf("Enter %d elements with a space in between : ", s); 
    for (int i = 0; i < s; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 
 
    int max = findMaximum(arr, s); 
    printf("The maximum valued element in the array is : %d\n\n\n", max); 
 
    return 0; 
}