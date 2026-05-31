#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *original, *reversed;
    char original_file[100], reversed_file[100];
    long file_size;
    int i;

    printf("Enter original file name: ");
    scanf("%s", original_file);
    printf("Enter reversed file name: ");
    scanf("%s", reversed_file);

    original = fopen(original_file, "r");
    if (original == NULL) {
        printf("Cannot open original file.\n");
        return 1;
    }

    // Find file size by seeking to end
    fseek(original, 0, SEEK_END);
    file_size = ftell(original);
    fseek(original, 0, SEEK_SET);

    reversed = fopen(reversed_file, "w");
    if (reversed == NULL) {
        printf("Cannot create reversed file.\n");
        fclose(original);
        return 1;
    }

    // Read from end to beginning and write to new file
    for (i = 1; i <= file_size; i++) {
        fseek(original, -i, SEEK_END);
        fputc(fgetc(original), reversed);
    }

    fclose(original);
    fclose(reversed);

    printf("File reversed successfully.\n");
    return 0;
}