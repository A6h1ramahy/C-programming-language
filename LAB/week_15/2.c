#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *classA, *classB, *merged;
    char ch;

    classA = fopen("classA.txt", "r");
    if (classA == NULL) {
        printf("Cannot open classA.txt\n");
        return 1;
    }

    classB = fopen("classB.txt", "r");
    if (classB == NULL) {
        printf("Cannot open classB.txt\n");
        fclose(classA);
        return 1;
    }

    merged = fopen("merged_class.txt", "w");
    if (merged == NULL) {
        printf("Cannot create merged file\n");
        fclose(classA);
        fclose(classB);
        return 1;
    }

    while ((ch = fgetc(classA)) != EOF) {
        fputc(ch, merged);
    }

    while ((ch = fgetc(classB)) != EOF) {
        fputc(ch, merged);
    }

    fclose(classA);
    fclose(classB);
    fclose(merged);

    printf("Files merged successfully into merged_class.txt\n");
    return 0;
}