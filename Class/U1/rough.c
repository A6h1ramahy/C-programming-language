// #include <stdio.h>

// int main() 
// {
//     float b, h, area;

//     // Input the base and height
//     printf("Enter the base of the rectangle: ");
//     scanf("%f", &b);

//     printf("Enter the height of the rectangle: ");
//     scanf("%f", &h);

//     // Calculate the area
//     area = b * h;

//     // Output the area
//     printf("The area of the rectangle is: %.2f\n", area);

//     return 0;
// }









// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// #include <stdlib.h>

// int main()
// {
//     int a =10;
//     int b =11;

//     printf("%d + %d = %d", a,b,a+b);
//     return 0;
// }









/*
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
int a,rows=5;

int main()
{
    
    
    for(int i=1;i<=rows;i++)
    { 
    int m=65;
      for(int j=1;j<=i;j++)
      {
        printf("%c",m);
        m++;
      }
      printf("\n");
    }
    
        return 0;
}
*/







// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// #include <stdlib.h>

// int main()
// {
//   double num =2.718281828;
//   double a=log(num);
//   printf("%lf",a);
//   return 0;
// }








// #include <stdio.h>

// char a[] = "Royal Banquet";

// int main()
// {
//   int n;
//   n=sizeof(a)/sizeof(a[0]);
//   printf("%d\n",n);

//   for (int i=0;i<n;i++) 
//   {
//     printf("%c\n",a[i]);
//   }

//   return 0;
// }






// #include <stdio.h>

// int main() {
//     // Arrays to store diameter, mass, and number of moons
//     double diameter[] = {12742, 6779, 139829, 116469, 12104};
//     double mass[] = {5.97e+24, 6.42e+23, 1.96e+27, 5.68e+26, 4.87e+24};
//     int moons[] = {1, 2, 79, 83, 0};
//     int numPlanets = sizeof(diameter) / sizeof(diameter[0]);

//     // Print the table header
//     printf("| Diameter (km) | Mass (kg)  | Moons |\n");
//     printf("|---------------|------------|-------|\n");

//     // Print the planet details
//     for (int i = 0; i < numPlanets; i++) {
//         printf("| %-13.0f | %-10.2e | %-5d |\n", diameter[i], mass[i], moons[i]);
//     }

//     return 0;
// }








// #include <stdio.h>

// int main()
// {
//   while (1)
//   {
//     char a ;
//     printf("Enter the alphabet : ");
//     scanf(" %c",&a);
//     printf("ASCII value : %d\n\n",a);
//   }
  
//   return 0;
// }






// #include <stdio.h>

// int main()
// {
//   float a;
//   printf("Enter the float : ");
//   scanf(" %f",&a);

//   printf("--> %.0f\n",a);
//   printf("--> %f",a);

//   return 0;
// }





// #include <stdio.h>

// int main()
// {
//   int i=1;
//   for(;i<10;i++)
//   printf("%d ",i);
//   printf("%d ",i);
//   return 0;
// }





// #include <stdio.h>

// int main()
// {
//   int a=5;
//   if (0) printf("helloo");
//   else if (a>3) printf("Hiii");
//   else printf("HI HELLO");
//   return 0;
// }


// #include <stdio.h>

// int main()
// {
//   int a;
//   printf("Enter the marks : ");
//   scanf("%d",&a);
//   switch (a)
//   {
//     case 100:
//       printf("You are in 1st class\n");
//       break;
//     case 2:
//       printf("You are in 2nd class\n");
//       break;
//     case 3:
//       printf("You are in 3rd class\n");
//       break;
//     default:
//       printf("You are in fail class\n");
//       break;
//   }
//   return 0;
// }



// #include <stdio.h>

// int main()
// {
  
//   return 0;
// }
