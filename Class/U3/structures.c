# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct Student{
    char rollno[100];
    char name[100];
    int Marks;
};

int main()
{
    // Student s1;

    // printf("\n\nBEFORE\n");
    // printf("NAME : %s\n",s1.name);
    // printf("ROLL NUMBER : %s\n",s1.rollno);
    // printf("MARKS : %d\n\n",s1.Marks);

    // printf("ENTER NAME : ");
    // scanf("%[^\n]s", &s1.name);
    // getchar(); // consume the leftover newline

    // printf("ENTER ROLL NUMBER : ");
    // scanf("%[^\n]s", &s1.rollno);
    // getchar(); // consume the leftover newline
    
    // printf("ENTER MARKS : ");
    // scanf("%d",&s1.Marks);
    // getchar();

    // printf("\nAFTER\n");
    // printf("NAME : %s\n",s1.name);
    // printf("ROLL NUMBER : %s\n",s1.rollno);
    // printf("MARKS : %d\n\n",s1.Marks);

    struct Student *s2;

    s2 = (struct Student*)malloc(sizeof(struct Student));

    printf("\n\nBEFORE\n");
    printf("NAME : %s\n",s2->name);
    printf("ROLL NUMBER : %s\n",s2->rollno);
    printf("MARKS : %d\n\n",s2->Marks);

    printf("ENTER NAME : ");
    char a=getchar();
    int i=0;
    while(a != '\n' && a != '\0' && i<98)
    {
        s2->name[i] = a;
        i+=1;
        a = getchar();
    }
    s2->name[i+1]='\0';

    printf("ENTER ROLL NUMBER : ");
    fgets(s2->rollno, sizeof(s2->rollno), stdin);
    size_t len = strlen(s2->rollno);
    if (len > 0 && s2->rollno[len - 1] == '\n') {
        s2->rollno[len - 1] = '\0';
    }

    printf("ENTER MARKS : ");
    scanf("%d",&s2->Marks);

    printf("\nAFTER\n");
    printf("NAME : %s\n",s2->name);
    printf("ROLL NUMBER : %s\n",s2->rollno);
    printf("MARKS : %d\n\n",s2->Marks);

    // free (s2);
    // s2=NULL;

    return 0;
}