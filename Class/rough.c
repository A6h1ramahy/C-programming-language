// #include <stdio.h>

// int main()
// {
//     char a[100];
//     scanf(" %[^\n]s",&a);
//     printf("%s",&a);
//     return 0;
// }






// #include<stdio.h> 
// int main (int argc, char *argv[]) 
// { 
// int i; 
// for (i = 0;i < argc; i ++) 
// printf ("Argc %d is %s\n", i, argv[i]); 
// return 0; 
// }





// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *p;
//     int new;
//     int size;
//     printf("Enter size : ");
//     scanf("%d",&size);
//     p = (int*)malloc(size*sizeof(int));
//     // p = (int*)calloc(size,sizeof(int));
//     printf("Enter elements : \n");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&p[i]);
//     }
//     printf("Entered elements : ");
//     for(int i=0;i<size; i++)
//     {
//         printf("\n%d",p[i]);
//     }
//     printf("\nEnter new size : ");
//     scanf("%d",&new);
//     p=(int*)realloc(p,new*(sizeof(int)));
//     printf("Enter elements : ");
//     for(int i=0;i<new;i++)
//     {
//         scanf("%d",&p[i]);
//     }
//     printf("Entered elements : ");
//     for(int i=0;i<new; i++)
//     {
//         printf("\n%d",p[i]);
//     }
//     free(p);
//     return 0;
// }





// #include <stdio.h> 
// #include <string.h> 
//  union Data { 
// int i;     
// float f;     
// char str[20]; 
// }; 
// int main() { 
//     union Data d; 
 
//     // Assign to int 
//     d.i = 100;     printf("After assigning int:\n"); 
//     printf("d.i = %d\n", d.i);    printf("d.f = %f\n", d.f); 
//     printf("d.str = %s\n\n", d.str);  // May print garbage 
 
//     // Assign to float 
//     d.f = 3.14;     printf("After assigning float:\n"); 
//     printf("d.i = %d\n", d.i);        // May print garbage 
//     printf("d.f = %f\n", d.f); 
//     printf("d.str = %s\n\n", d.str);  // May print garbage
//     // Assign to string 
//     strcpy(d.str, "Hello"); 
//     printf("After assigning string:\n"); 
//     printf("d.i = %d\n", d.i);        // May print garbage 
//     printf("d.f = %f\n", d.f);        // May print garbage 
//     printf("d.str = %s\n", d.str); 
//     return 0; 
// } 






// #include <stdio.h>
// #define A "0"
// int main()
// {   
//     return 0;
// }





// #include<stdio.h>
// int main()
// {
// int i=0;
// for(;i<=5;)
// {
// i++;
// printf("%d ", i);
// }
// return 0;
// }





// ii) Predict the output of the below code: (2M)
#include<stdio.h>
int main()
{
int h=5;
int b=5*2<h*2?1:0;
printf("%d\n",b);
return 0;
}
