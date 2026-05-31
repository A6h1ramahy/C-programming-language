#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("text.txt","r");
    char ch;
    while((ch=fgetc(f))!=EOF)
    {
        printf("%c",ch);
        // fputc(ch,stdout);
    }
    fclose(f);
    return 0;
}