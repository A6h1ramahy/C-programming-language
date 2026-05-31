#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error: Cannot open source.txt\n");
        return 1;
    }

    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error: Cannot create destination.txt\n");
        fclose(source); 
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully from source.txt to destination.txt.\n");
    return 0;
}