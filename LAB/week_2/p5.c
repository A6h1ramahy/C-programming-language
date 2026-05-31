# include <stdio.h>
int main() 
{
    int a,area,perimeter;

    printf("\n\nEnter the side of the square : ");
    scanf("%d", &a);
    
    area=a*a;
    perimeter=4*a;

    printf("\nthe area of the sqaure is : %d",area);
    printf("\n\nthe perimeter of the square is : %d\n\n",perimeter);

    return 0;
}