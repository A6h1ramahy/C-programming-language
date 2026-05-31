#include <stdio.h>

int findLargest(int *arr, int size) {
    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > largest) {
            largest = *ptr;
        }
    }

    return largest;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, size);
    printf("The largest element is: %d\n", largest);

    return 0;
}