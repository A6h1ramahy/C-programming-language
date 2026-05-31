#include <stdio.h>
#include <string.h>

int main()
{
//! (1)
    // char ch[] = {'a','b','c','d'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");


//! (2)
    // char ch[] = {'a','b','c','d','\0'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");


//! (3)
    // char ch[10] = {'a','b','c','d','\0'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (4)
    // char ch[] = "abcd";
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//!(5)
    // char ch[] = "abcd\0";
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (6)
    // char ch[10] = {'a','b','c','d'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (7)
    // char ch[10] = {'a','b','c','d','\0','e','f','g'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (8)
    // char ch[] = {'a','b','c','d','\0','e','f','g'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (9)
    // char ch[] = {'a','b','c','d','\0','e','f','g','\0'};
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (10)
    // char ch[] = "abcd\\0efg";
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//! (11)
    // char ch[] = "abcd\0efgh";
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//!(12)
    // char ch[5] = "abcd\0efgh";
    // printf("SIZE : %d\n", sizeof(ch));

    // for (int i=0; i<sizeof(ch); i++)
    // printf("%c", ch[i]);

    // printf("\n%s",ch);

    // printf("\n");



//!(13)
    // char ch[100];
    // printf("Enter : ");
    // scanf("%s",&ch); //? Space wont work (Since scanf is whitespace specified)
    // printf("%s",ch);



//!(14)
    // char ch[100];
    // char ch1[100];
    // char ch2[100];
    // printf("Enter : ");
    // scanf("%s %s %s",&ch,&ch1,&ch2); 
    // printf("%s  %s  %s",ch,ch1,ch2);



//!(15)
    // char ch[100];
    // printf("Enter : ");
    // scanf("%[abcd]s",&ch); //? only enter a or b or c or d (or else scanf terminates)
    // printf("%s",ch);



//!(16)
    // char ch[100];
    // printf("Enter : ");
    // scanf("%[^abcd]s",&ch); //? if you enter a or b or c or d scanf terminates
    // printf("%s",ch);



//!(17)
    // char ch[100];
    // printf("Enter : ");
    // scanf("%[^\n]s",&ch); //? This is used to store in one variable where it skips only for new line
    // printf("%s",ch);

    return 0;
}