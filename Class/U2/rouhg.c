// #include <stdio.h>

// int main()
// {
//     int *p, x = 20;
// p = &x;
// printf("p = %u\n", p);
// printf("p+1 = %p\n", (int*)p+1);
// printf("p+1 = %p\n", (char*)p+1);
// printf("p+1 = %p\n", (float*)p+1);
// printf("p+1 = %p\n", (double*)p+1);
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int arr[] = {100,200,300,400,500};
//     int *p ;
//     p = arr;
//     printf("%d %d %p", p[5] ,arr[5], p[5]);
//     return 0;
// }



// #include <stdio.h>

// int arr[ ] = {12,33,44};
// int *p2 = arr;
// int main()
// {
//    printf("before increment %p %d\n",p2, *p2); // Some address 12
//    p2++; //same as p2 = p2+1
//  // This means 5000+sizeof(every element)*1 if 5000 is the base address
//  //increment the pointer by 1. p2 is now pointing to next location.
//    printf("after increment %p %d\n",p2, *p2); // 33 
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a = 100;
//     printf("%d", sizeof(a));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// int arr[] ={12,44,22,33,55};
// int *p3 = arr;
// int i; 

// for(i = 0;i<5;i++)
// printf("%d \t",*++p3); // 44 22 33 55 undefined value
// // every iteration p3 is incremented. 

// return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int arr[4][3]={33,44,11,55,88,22,33,66,99,11,80,9};
//     int (*p)[3]=arr;
//     printf("%d\n",p[2][1]); // Array notation
//     printf("%d\n",*(*(p+2)+1)); //Pointer notation
//     printf("%d\n",sizeof(p)); //size of pointer
//     printf("%d %d\n",sizeof(*p),sizeof(arr)); //size of the array pointing to 0th row and size ofthe entire 2D array
//     return 0;
// }





// #include<stdio.h>
// #include <math.h>

// void disp_hello ()
// {
//     printf("\nHello There......\n");
// }

// int sum(int x, int y)
// {
//     return x+y;
// }

// int decrement(int y)
// {
//     return --y;
// }

// double use_pow(int x,int y)
// {
//     return pow(x,y);
// }

// int main()
// {
//  int x = 100;
//  int y = 10;
// int answer = sum(x,y);
//  printf("sum is %d\n",answer);
//  answer = decrement(x);
//  printf("decremented value is %d\n",answer);
//  disp_hello();
// double ans = use_pow(x,y);
//  printf("ans is %lf\n",ans);
// answer = sum(x+6,y);
//  printf("answer is %d\n", answer);
// printf("power : %lf\n", use_pow(5,2));
//  return 0;
// }



// #include <stdio.h>

// int fun1(int a1)
// { printf("a1 in fun1 before changing %d\n", a1); //100 
//     a1 = 200;
//     printf("a1 in fun1 after changing %d\n", a1); //200
//     return 0;
// }
// void main()
// {
//  int a1 = 100;
//  int *p = &a1;
//  printf("before function call a1 is %d\n", a1); // a1 is 100
//  fun1(a1); // call
//  printf("after function call a1 is %d\n", a1); // a1 is 100
//  printf("%p %p",&a1,p);
// }




// #include <stdio.h>

// int main() {
//     int num = 42;
//     int *ptr = &num;  // Pointer holding address of 'num'

//     printf("Address of 'num': %p\n", &ptr);
//     printf("Address of 'ptr': %p\n", &num);

//     return 0;
// }





// void swap(int *a, int *b)
// {
//  int temp = *a;
//  *a = *b;
//  *b = temp;
// }
// int main()
// { int a = 100;
//  int b = 200;
//  printf("before call a is %d and b is %d\n", a, b); // a is 100 and b is 200
//  swap(&a, &b);
//  printf("after call a is %d and b is %d\n", a, b); // a is 100 and b is 200
//  return 0;
// } 


// #include <stdio.h>
// void fun1(int *a1);
// int main()
// {
//  int a1 = 100;
//  printf("before function call a1 is %d\n", a1); // 100
//  fun1(&a1); // call
//  printf("after function call a1 is %d\n", a1); // 100
//  return 0;
// }
// void fun1(int *a1)
// {
//  int b = 200;
//  printf("*a1 in fun1 before changing %d\n", *a1); //100
//  *a1 = b;
//  printf("*a1 in fun1 after changing %d\n", *a1); //200
// } 


// #include <stdio.h>
// void f1(int); void f2(int*); void f3(int); void f4(int*);int* f5(int* ); int* f6();
// int main()
// { int x = 100;
//  f1(x);
//  printf("x is %d\n", x); // 100
//  double y = 6.5;
//  f1(y); // observe what happens when double value is passed as argument to integerparameter?
//  printf("y is %lf\n", y); // 6.5
//  int *p = &x; // pointer variable 
//  f4(p);
//  printf("x is %d and *p is %d\n", x, *p, p);
//  return 0;
// }
// void f1(int x)
// { 
//     printf("x in f1 is %d\n", x); // 100
//     x = 20;
// printf("x in f1 is %d\n", x); // 20
// }
// void f2(int* q)
// {
//  int temp = 200;
//  q = &temp;
// }
// void f3(int t)
// { t = 200; } 
// void f4(int* q)
// {
//  int temp = 200;
//  *q = temp;
// }
// int* f5(int* x)
// { return x; } 



// #include <stdio.h>

// int main() {
//     int num = 10;       // An integer variable
//     int *ptr = &num;    // Pointer storing the address of 'num'

//     printf("Address of num: %p\n", (void*)&num);   // Address of 'num'
//     printf("Value of ptr: %p\n", (void*)ptr);      // Address stored in 'ptr' (same as &num)
//     printf("Address of ptr: %p\n", (void*)&ptr);   // Address of the pointer itself

//     return 0;
// }






// #include <stdio.h>

// void invert(int arr[],int n)
//     {
//         for (int j =0; j<=(n/2) ;j++)
//         {
//             int temp = arr[j];
//             arr[j] = arr[n-j-1];
//             arr[n-j-1] = temp;
//         }
//     }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     invert(arr,n);
//     for (int i =0;i<5;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }






// #include <stdio.h>

// int main()
// {
//     int arr[2] = {1,2};
//     printf("%d\n",sizeof(arr));
//     printf("%d",(arr[2]));
//     return 0;
// }


// #include <stdio.h>
// void fun(int n)
// {
//  int arr[n];
//  printf("success");
//  // ......
// }
// int main()
// {
//  fun(6);
//  return 0;
// }



// #include <stdio.h>
// int arr[10];
// int main()
// {
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i =0; i<n; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }




// #include <stdio.h>
// int arr[5] = {[1]=1,[3]=3};
// int main()
// {
//     for (int i =0; i<5; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>

// int addition(int arr[],int n)
// {
//     int sum =0;
//     for (int k=0;k<n;k++)
//     {
//         sum+=arr[k];
//     }
//     return sum;
// }

// int main()
// {
//     int n=10;
//     int sum = 0;
//     // printf("Enter size : ");
//     // scanf("%d",&n);
//     int arr[n];
//     printf("Enter \n");
//     for (int i=0 ; i<n ; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int s = addition(arr,n);
//     printf("%d",s);
//     return 0;
// }





// #include <stdio.h>
// int arr[]={12, 25, 30, 12, 45, 60, 25, 30, 75, 90, 45};
// int main()
// {
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0; i)
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int *p1;
// float *f1 ;
// char *c1;
// printf("%d%d%d ",sizeof(p1),sizeof(f1),sizeof(c1)); // Same value for all
// int a[] = {22,11,44,5};
// int *p = a;
// p++; // Fine
// printf("%d", 1[a]);
// p[2] = 222; // allowed
// a[2] = 222 ; // Fine 
// printf("%d",*(a+1));
//     return 0;
// }




// #include <stdio.h>
// void fun1(int *a1);
// int main()
// {
//  int a1 = 100;
//  printf("before function call a1 is %d\n", a1); // 100
//  fun1(&a1); // call
//  printf("after function call a1 is %d\n", a1); // 100
//  return 0;
// }
// void fun1(int *a1)
// {
//  int b = 200;
//  printf("*a1 in fun1 before changing %d\n", *a1); //100
//  a1 = &b;
//  printf("*a1 in fun1 after changing %d\n", *a1); //200
// } 





// #include<stdio.h>
// void read_array(int[],int);
// void display_array(int[],int);
// int find_sum(int[],int);
// void increment(int a[],int n);
// int main()
// {
//  int a[100];
//  int n; // Local variable n
//  printf("how many elements u want to add\n");
//  scanf("%d",&n);
//  printf("enter %d elements\n",n);
//  printf("sizeof a is %d\n",sizeof(a));
//  read_array(a,n);
//  printf("entered elements are\n");
//  display_array(a,n);
//  printf("\nsum is %d\n",find_sum(a,n));
//  int sum = find_sum(a,n);
//  printf("%d",sum);
// }
// void read_array(int a[],int n)
// {
//  for(int i= 0; i<n;i++)
//  { scanf("%d",&a[i]); }
// }
// void display_array(int a[],int n)
// {
//  for(int i= 0; i<n;i++)
//  { printf("%d\t",a[i]); }
// } 
// int find_sum(int a[],int n)
// {
//  int sum = 0;
//  for(int i= 0; i<n;i++)
//  { sum = sum+a[i]; }
//  return sum;
// } 




// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <limits.h>
// #include <strings.h>

// int linear_search(int *a,int n , int key);

// int main()
// {
//     int arr[]={10,20,30,40,50,60,70,80,90,100};
//     printf("Enter the element to be searched : ");
//     int key;
//     scanf("%d",&key);
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int result = linear_search(arr,n,key);
//     if (result == -1)
//     {
//         printf("NOT AVAILABLE");
//     }
//     else 
//     {
//         printf("PRESENT in index %d", result);
//     }
//     return 0;
// }

// int linear_search(int *a,int n ,int key)
// {
//     int ai = 0;
//     int b = -1;
//     for (int i =0; i<n && ai==0; i++)
//     {
//         if (key==a[i])
//         {
//             ai =1;
//             b = i;
//         }
//     }
//     return b;
// }






// #include <stdio.h>

// void read(int *arr,int n);
// void disp(int *arr, int n);
// void sort(int *arr, int n);
// void swap(int *a, int *b);

// int main()
// {
//     printf("Enter number of elements to be entred : ");
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     printf("\nENTER \n");
//     read(arr,n);
//     printf("\nBEFORE SORTING\n");
//     disp(arr,n);
//     sort(arr,n);
//     printf("\nAFTER SORTING\n");
//     disp(arr,n);   
//     return 0;
// }

// void disp(int *arr,int n)
// {
//     printf("\n");
//     for (int i =0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void read(int *arr, int n)
// {
//     for (int j =0; j<n;j++)
//     {
//         scanf("%d",&arr[j]);
//     }
// }


// void sort(int *arr, int n)
// {
//     int res;
//     for (int k =0; k<n; k++)
//     {
//         res =k;
//         for (int j = k+1; j<n ; j++)
//         {
//             if (arr[res]>arr[j])
//             {
//                 int t = arr[j];
//                 arr[j] = arr[res];
//                 arr[res] = t;
//             }
//         }
//     }
// }




// #include <stdio.h>

// int main() {
//     for (int i = 0; i <= 127; i++) {
//         printf("ASCII %3d : %c\n", i, i);  // %3d pads numbers for alignment
//     }
//     return 0;
// }










// #include <stdio.h> 
// // #define PI 3.14159  // Define the value of π 
// int main() { 
// float radius, height, volume, PI=3.14159; 
// printf("Enter the radius of the cylinder: "); 
// scanf("%f", &radius); 
// printf("Enter the height of the cylinder: "); 
// scanf("%f", &height); 
// volume = PI * radius * radius * height; 
// printf("Volume of the cylinder = %.2f cubic units\n", volume); 
// return 0; 
// }





// #include <stdio.h>

// int main()
// {
//     for (int i=0; i<=200; i++)
//     {
//         printf("%d = %c\n", i, i); // ASCII value and character
//     }
//     return 0;
// }




// #include <stdio.h> 
// int main() { 
// int num, first, middle, last, reversed; 
// printf("Enter a three-digit number: "); 
// scanf("%d", &num); 
// first = num / 100;        
// // Get the first digit 
// middle = (num / 10) % 10; // Get the middle digit 
// last = num % 10;         
// // Get the last digit 
// // Reverse the number 
// reversed = (last * 100) + (middle * 10) + first; 
// printf("Reversed number: %d\n", reversed); 
// return 0; 
// }




// #include <stdio.h>
// int main() { 
     
//     int num, first, middle, last, modified_num; 
     
//         printf("Enter a three-digit number: "); 
//         scanf("%d", &num); 
     
         
//         first = num / 100;            // First digit 
//         middle = (num / 10) % 10;   // Middle digit 
//         last = num % 10;             // Last digit 
     
         
//         first *= 2;     // Double the first digit 
//         last /= 2;      // Halve the last digit (integer division) 
     
//         // modified_num = (first * 100) + (middle * 10) + last; 
     
//         printf("Modified number: %d%d%d\n",first , middle, last ); 
     
//         return 0; 
//     }



// #include <stdio.h> 
// int main() { 
// int a, b, c; 
// printf("Enter three integers\n"); 
// scanf("%d%d%d",&a,&b,&c); 
// a = a*a; 
// b = b*b; 
// c = c*c; 
// printf("%d@%d@%d\n", a, b, c); 
// return 0; 
// }




// #include <stdio.h>

// int main()
// {
//     printf("%c",(65+25));
//     return 0;
// }






// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("enter : ");
//     scanf("%c",&ch);
//     if (65<=ch && ch<=90)
//         {
//         ch=ch+('a'-'A');
//         printf("%c",ch);
//         }
//     else if (97<=ch && ch<=122)
//     {
//         ch=ch-('a'-'A');
//         printf("%c",ch);
//     }
//     else
//     {
//         printf("INVALID INPUT");
//     }
//     return 0;
// }



// #include <stdio.h> 
// int main() { 
// int day, month, year; 
// printf("Enter a date (DD/MM/YYYY): "); 
// scanf("%d/%d/%d", &day, &month, &year); 
// printf("Formatted date: %d-%02d-%02d\n", year, month, day); 
// return 0; 
// } 



// #include <stdio.h> 
// int main() { 
// int num; 
// printf("Enter an integer: "); 
// scanf("%d", &num); 
// printf("Binary: %#b (not directly supported in C)\n"); 
// printf("Octal: %#o\n", num); 
// return 0; 
// } 






// #include <stdio.h>

// int main()
// {
//     int year;
//     printf("ENTER : 0");
//     scanf("%d",&year);
//     if ((year%4==0 && year%100!=0) || year%400==0)
//         printf("LEAP YEAR");
//     else
//         printf("NOT A LEAP YEAR");
//     return 0;
// }





#include <stdio.h> 
 
// int main() { 
//     int n; 
//     printf("Enter the height of the pyramid (5-20): "); 
//     scanf("%d", &n); 
 
//     // Loop for each row 
//     for (int i = 1; i <= n; i++) { 
//         // Loop to print spaces 
//         for (int j = 1; j <= n - i; j++) { 
//             printf(" "); 
//         } 
 
//         // Loop to print stars 
//         for (int j = 1; j <= (2 * i - 1); j++) { 
//             // Print star on the boundaries or for the first and last row 
//             if (i == n || j == 1 || j == (2 * i - 1)) { 
//                 printf("*"); 
//             } else { 
//                 printf(" "); 
//             } 
//         } 
 
//         printf("\n"); 
//     } 
 
//     return 0; 
// } 





// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter : ");
//     scanf("%d",&n);

//     printf("The prime numbers are : \n");
//     for (int i=2; i<=n; i++)
//     {
//         int Sprime =1;
//         for (int j=2; j<=i/2; j++)
//         {
//             if (i%j==0)
//             {
//                 Sprime =0;
//                 break;
//             }
//         }
//         if (Sprime==1)
//         {
//             printf("%d \n",i);
//         }
//     }
//     return 0;
// }






 
// #include <stdio.h> 
// int main()  
// { 
// int n, k = 0; 
// printf("Enter number of elements: "); 
// scanf("%d", &n); 
// int arr[n], result[n]; 
// printf("Enter elements: "); 
// for (int i = 0; i < n; i++) { 
// scanf("%d", &arr[i]); 
// } 
// for (int i = 0; i < n; i++) { 
//     int isDuplicate = 0; 
//     for (int j = i+1; j < n; j++) { 
//         if (arr[i] == arr[j]) {
//         isDuplicate = 1; 
//         break; 
//         } 
//     }    
//     if (!isDuplicate) { 
//         result[k] = arr[i]; 
//         k++;
//     } 
// } 
// printf("Array without duplicates: "); 
// for (int i = 0; i < k; i++) { 
// printf("%d ", result[i]); 
// } 
// return 0; 
// }

#include <stdio.h>
int main(){
    printf("%#x",16);
}