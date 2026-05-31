#include <stdio.h>

void posNeg(int num) {
    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    posNeg(number);
    return 0;
}