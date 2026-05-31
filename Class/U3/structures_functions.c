#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int age;
}MAN;

void read(MAN* m);
void display(MAN m);
MAN modify(MAN m);

int main(){
    MAN *m1 = (MAN*)malloc(sizeof(MAN));
    read(m1);
    display(*m1);
    MAN m2 = *m1;
    m2 = modify(m2);
    display(m2);
    return 0;
}

void read(MAN *m)
{
    printf("\nNAME : ");
    scanf("%[^\n]s", m->name);
    getchar();

    printf("AGE : ");
    scanf("%d", &(m->age));

    return ;
}

void display(MAN m)
{
    printf("\n%s",m.name);
    printf("\n%d", m.age);

    return ;
}

MAN modify(MAN m)
{
    getchar();
    printf("\nNAME : ");
    char a[100];
    scanf("%[^\n]s",a);
    strcpy(m.name, a);

    printf("AGE : ");
    scanf("%d", m.age);

    return m;
}