#include <stdio.h>

int main() 
{
    float income, tax = 0, netincome;

    printf("\n\nEnter your annual income : ");
    scanf("%f", &income);

    if (income < 0) 
    {
        printf("\nInvalid income entered!\n\n"); 
    }

    else
    {
        if (income <= 250000)
        {
            tax = 0; 
        } 
        else if (income > 250000 && income <= 500000) 
        {
            tax = (income - 250000) * 0.05; 
        } 
        else if (income > 500000 && income <= 1000000) 
        {
            tax = (income - 500000) * 0.20 + 250000 * 0.05; 
        } 
        else 
        {
            tax = (income - 1000000) * 0.30 + 500000 * 0.20 + 250000 * 0.05; 
        }

        netincome = income - tax;

        printf("\nTax amount: %.2f\n", tax);
        printf("Net income after tax: %.2f\n\n", netincome);
    }

    return 0;
}