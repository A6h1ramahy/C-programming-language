#include <stdio.h>
int arr[10];
int main()
{
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i =0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}