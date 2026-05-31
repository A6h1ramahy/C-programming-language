# include<stdio.h>
int main() 
{
    int food_cost,tip_percentage,total_bill;

    printf("\n\nThe cost of the food is : ");
    scanf("%d", &food_cost);

    tip_percentage=food_cost*0.1;
    printf("\nThe tip percentage will be : %d \n",tip_percentage);

    total_bill=tip_percentage+food_cost;
    printf("\nThe total bill will be : %d\n\n",total_bill);

    return 0;
}
