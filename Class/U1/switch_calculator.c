//! INCOMPLETE




#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>


int main()
{
    int run = 1;
    while (run)
        {
        int choice;
        printf("\n\n------CALCULATOR------\n\n\nWhat option do you want to go with ..... ?!\n\n1 --> Arithmetic\n2 --> Exponential and Logarithm \n3 --> Root of a number\n4 --> Factorial\n5 --> EXIT\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                int run1 = 1;
                while (run1)
                {
                    char operator1;
                    printf("\n\n---ARITHEMATIC CALCULATOR---\n\n\nWhich operation you want to perform.....?!\n'+' --> Addition (of n numbers)\n'-' --> Substaction of two numbers\n'*'--> Multiplication\n'/' --> Division of two number\n'$' --> Go Back (HOME PAGE)\n\nEnter your choice : ");
                    scanf(" %c",&operator1);

                    switch(operator1)
                    {
                        case '+':
                        {
                            int dcount;
                            double num , sum=0;
                            printf("\nEnter the number of values to be added : ");
                            scanf("%d",&dcount);
                            for (int i = 0; i<dcount; i++)
                            {
                                printf("Enter the number %d : ",i+1);
                                scanf("%lf",&num);
                                sum+=num;
                            }
                            printf("\nThe sum of entered values = %lf\n\n",sum);
                            break;
                        }

                        case  '-':
                        {
                            double num1 , num2;
                            printf("\nEnter a number from which a number to be substracted : ");
                            scanf("%lf",&num1);
                            printf("Enter a number to substract from a number : ");
                            scanf("%lf",&num2);
                            printf("\nDifference (%lf - %lf) = %lf\n\n",num1,num2,num1-num2);
                            break;
                        }

                        case '*':
                        {
                            int dcount;
                            double num , mult=1;
                            printf("\nEnter the number of values to be multiplied : ");
                            scanf("%d",&dcount);
                            for (int i = 0; i<dcount; i++)
                            {
                                printf("Enter the number %d : ",i+1);
                                scanf("%lf",&num);
                                mult*=num;
                            }
                            printf("\nThe product of entered values = %lf\n\n",mult);
                            break;
                        }

                        case '/':
                        {
                            double num1 , num2;
                            printf("\nEnter the number to be divided (Dividend) : ");
                            scanf("%lf",&num1);
                            printf("Enter the number by which the dividend is divided (Divisor) : ");
                            scanf("%lf",&num2);
                            if (num2==0)
                                printf("\nError : A  number cannot be divided by zero\n\n");
                            else
                                printf("\nProduct (%lf / %lf) = %lf\n\n",num1,num2,num1/num2);
                            break;
                        }

                        case '$':
                        {
                            run1 = 0;
                            break;
                        }

                        default:
                        {
                            printf("\n~~/~~/~~/~~/~~INVALID INPUT~~/~~/~~/~~/~~");
                            while (getchar() != '\n');
                            break;
                        }
                    }
                }
                break;
            }
            
            case 2:
            {
                int run2 = 1;
                while (run2)
                    {
                        char operator2;
                        printf("\n\n---EXPONENTIAL AND LOGARITHM---\n\n\nWhat do you want to perform.....?!\n'a' --> Exponential\n'b' --> Power of a number\n'c'--> Logarithm\n'$' --> Go Back (HOME PAGE)\n\nEnter your choice : ");
                        scanf(" %c",&operator2);
    
                        switch(operator2)
                        {
                            case 'a':
                            {
                                printf("");
                                break;
                            }

                            case 'b':
                            {

                                break;
                            }

                            case 'c':
                            {

                                break;
                            }

                            case '$':
                            {
                                run2 = 0;
                                break;
                            }
                        }
                    }
                break;
            }

            case 3:
            {

                break;
            }

            case 4:
            {

                break;
            }

            case 5:
            {
                printf("\n\nTHANK YOU\n\n");
                run=0;
                break;
            }

            default:
            {
                printf("\n~~/~~/~~/~~/~~INVALID INPUT~~/~~/~~/~~/~~");
                while (getchar() != '\n');
                break;
            }
        }
    }
    return 0;
}