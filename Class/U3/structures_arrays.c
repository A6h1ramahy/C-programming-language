# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct {
    char title[100];
    char author[100];
    int year;
}LIB;

void read(LIB *b,int n);
void display(const LIB *b,int n);
int by_author(LIB *b, LIB *a, int n, char author[0]);
int by_year(LIB *b, LIB *y, int n, int year);

int main()
{   
    LIB b[1000];
    LIB b_auth[1000];
    LIB b_year[1000];
    int n;
    int count_a;
    char author[100];
    int year;
    int count_y;

    printf("\nEnter the number of Books available in the Library : ");
    scanf("%d",&n);
    getchar();
    printf("Enter DETAILS : \n");
    read(b,n);

    printf("\nHere are the Entered Books details : ");
    display(b,n);

    printf("\n\nEnter the author of the book you want search : ");
    scanf("%[^\n]s",&author);
    getchar();
    count_a = by_author(b,b_auth,n,author);

    if(count_a)
    {
        printf("\nThere are %d books of the author %s.\nDETAILS : \n",count_a,author);
        display(b_auth,count_a);
    }
    else
    {
        printf("\nThere are no available books of the author %s",author);
    }

    printf("\n\nEnter the Year of the book you want to search : ");
    scanf("%d",&year);
    getchar();
    count_y = by_year(b,b_year,n,year);

    if(count_y)
    {
        printf("\nThere are %d books of the year %d.\nDETAILS : \n",count_y,year);
        display(b_year,count_y);
    }
    else
    {
        printf("\nThere are no available books of the year %d",year);
    }

    return 0;
}

void read(LIB *b,int n)
{
    for (int i=0; i<n; i++)
    {
        printf("\n%d\n",i+1);

        printf("Title : ");
        scanf("%[^\n]s",b[i].title);
        getchar();

        printf("Author : ");
        scanf("%[^\n]s",b[i].author);
        getchar();

        printf("Year : ");
        scanf("%d",&b[i].year);
        getchar();
    }
}

void display(const LIB *b,int n)
{
    printf("\nTITLE\tAUTHOR\tYEAR");
    for (int i=0; i<n; i++)
    {
        printf("\n%s\t%s\t%d",b[i].title,b[i].author,b[i].year);
    } 
}

int by_author(LIB *b, LIB *a, int n, char author[0])
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if (!(strcmp(b[i].author,author)))
        {
            a[count]=b[i];
            count++;
        }
    }
    return count;
}

int by_year(LIB *b, LIB *y, int n, int year)
{
    int count = 0;
        for (int i=0; i<n; i++)
    {
        if (b[i].year==year)
        {
            y[count]=b[i];
            count++;
        }
    }
    return count;
}