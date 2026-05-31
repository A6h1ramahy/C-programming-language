#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LEN 100

typedef struct {
    int id;
    char data[MAX_LEN];
} InputData;

void obscureFunction(char *str, int a, int b) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = (char)(((int)str[i] ^ a) + b);
    }
}

void reverseObscure(char *str, int a, int b) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = (char)(((int)str[i] - b) ^ a);
    }
}

int complexCondition(int x, int y) {
    return ((x * y + x - y) % 3 == 0) && ((x | y) & 1);
}

int main() {
    srand((unsigned int)time(NULL));

    int numInputs;
    printf("Enter number of inputs: ");
    if (scanf("%d", &numInputs) != 1 || numInputs <= 0 || numInputs > 10) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    InputData *inputs = malloc(sizeof(InputData) * numInputs);
    if (!inputs) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < numInputs; i++) {
        inputs[i].id = rand() % 1000;
        printf("Enter random string #%d: ", i + 1);
        scanf("%s", inputs[i].data);
        obscureFunction(inputs[i].data, inputs[i].id % 10 + 1, i % 5);
    }

    char secret[MAX_LEN] = {0};
    for (int i = 0; i < numInputs; i++) {
        reverseObscure(inputs[i].data, inputs[i].id % 10 + 1, i % 5);
        if (complexCondition(inputs[i].id, i)) {
            strcat(secret, "x");
        } else {
            strcat(secret, "y");
        }
    }

    // Triggered if at least one 'x' exists
    if (strchr(secret, 'x') != NULL) {
        char finalMessage[] = { 'f', 'u', 'c', 'k', ' ', 'u', '\0' };
        printf("Final output: %s\n", finalMessage);
    } else {
        printf("Conditions not met. Try different inputs.\n");
    }

    free(inputs);
    return 0;
}