#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char  name[100];
    int marks;
}Student;

void read(Student *s[],int n);
void assign_to_pointer(Student s[],Student *st[],int n);
void display1(Student s[],int n);
void display2(Student *st[], int n);
void selection_sort_by_Name(Student *st[],int n);
int binary_search_by_Name(Student *st[],int n,char *name);
void selection_sort_by_marks(Student *st[],int n);
int binary_search_by_marks(Student *st[],int n,int marks);
void swap(Student *a[],Student *b[]);

int main()
{
    Student s[1000];
    Student *st[1000];
    int n;
    char name[100];
    int i;
    int marks;
    int j;

    printf("\n\nEnter the number Students : ");
    scanf("%d",&n);

    printf("\nEnter the details of students : \n\n");
    read(&s,n);

    assign_to_pointer(s,st,n);

    printf("\n\nEntered elements : ");
    display1(s,n);

    printf("\n\nAssigned DATA : ");
    display2(st,n);

    selection_sort_by_Name(st,n);

    printf("\n\nSorted Array by NAME : ");
    display2(st,n);

    printf("Enter the Name of the Student to search : ");
    scanf(" %[^\n]s",&name);

    i=binary_search_by_Name(st,n,name);
    if (i!=-1)
    {
        printf("\n\nDETAILS of Student %s : ",name);
        printf("\nNAME\tMARKS");
        printf("\n%s\t%d",st[i]->name,st[i]->marks);
    }
    else
    {
        printf("\n\nDATA NOT FOUND");
    }

    selection_sort_by_marks(st,n);

    printf("\n\nSorted Array by MARKS : ");
    display2(st,n);

    printf("Enter the Marks of the Student to search : ");
    scanf(" %d",&marks);

    j = binary_search_by_marks(st,n,marks);
    if (j!=-1)
    {
        printf("\n\nDETAILS of Student with Marks %d: ",marks);
        printf("\nNAME\tMARKS");
        printf("\n%s\t%d",st[i]->name,st[i]->marks);
    }
    else
    {
        printf("\n\nDATA NOT FOUND");
    }

    return 0;
}

void read(Student *s[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Student %d : \n",i+1);
        printf("Name : ");
        scanf(" %[^\n]s",&s[i]->name);
        printf("Marks : ");
        scanf(" %d",&s[i]->marks);
        printf("\n");
    }
    return ;
}

void assign_to_pointer(Student s[],Student *st[],int n)
{
    for (int i=0;i<n;i++)
    {
        st[i]=&s[i];
    }
    return ;
}

void display1(Student s[],int n)
{
    printf("\n\nNAME\tMARKS\n");
    for (int i=0;i<n;i++)
    {
        printf("%s\t%d\n",s[i].name,s[i].marks);
    }
    return ;
}

void display2(Student *st[],int n)
{
    printf("\n\nNAME\tMARKS\n");
    for (int i=0;i<n;i++)
    {
        printf("%s\t%d\n",st[i]->name,st[i]->marks);
    }
    return ;
}

void selection_sort_by_Name(Student *st[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int pov = i;
        for (int j=i+1;j<n;j++)
        {
            if((strcmp(st[pov]->name,st[j]->name)>0))
            {
                pov=j;
            }
        }
        if (pov!=i)
        {
                swap(&st[i],&st[pov]);
        }
    }
    return ;
}

void swap(Student *a[], Student *b[]) {
    Student *temp = *a;
    a = b;
    *b = temp;
}

int binary_search_by_Name(Student *st[],int n,char *name)
{
    int low = 0;
    int high = n-1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        int a=strcmp(st[mid]->name,name);
        if (a==0)
        {
            return mid;
        }
        else if(a<0)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    return -1;
}

void selection_sort_by_marks(Student *st[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int pov = i;
        for (int j=i+1;j<n;j++)
        {
            if(st[pov]->marks>st[j]->marks)
            {
                pov=j;
            }
        }
        if (pov!=i)
        {
            swap(&st[i],&st[pov]);
        }
    }
    return ;
}

int binary_search_by_marks(Student *st[],int n,int marks)
{
    int low = 0;
    int high = n-1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        if (marks==st[mid]->marks)
        {
            return mid;
        }
        else if(marks>st[mid]->marks)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }  

    return -1;
}