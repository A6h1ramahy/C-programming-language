// #include <stdio.h>

// int main()
// {
//     int a=10;
//     printf("%d",a*a);
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     float c = 202.59865;
//     int b=1;
//     printf("%7.2f\n",c);// width.precission , f is type
// printf("%2.1f\n",c);// data will not be lost
// printf("%-5d %d\n",16,b);//-for left justification
//     return 0;
// }






// #include <stdio.h>
// #include <unistd.h> // For sleep function (optional on some systems)

// int main() {
//     printf("Loading...\r");
//     // fflush(stdout); // Force immediate output

//     sleep(2); // Pause for 2 seconds

//     printf("Done!     \n"); // Overwrites "Loading..."
//     return 0;
// }






// #include <stdio.h>

// int main() {
//     printf("Warning! Something went wrong!\a\n");
//     return 0;
// }






// #include <stdio.h>

// int main()
// {
//     printf("rama\nkrishna\bheema\n");//ramakrishnabheema
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     printf("Size of short int:      %zu bytes\n", sizeof(short int));
//     printf("Size of int:            %zu bytes\n", sizeof(int));
//     printf("Size of long int:       %zu bytes\n", sizeof(long int));
//     printf("Size of long long int:  %zu bytes\n", sizeof(long long int));
//     printf("Size of float:          %zu bytes\n", sizeof(float));
//     printf("Size of double:         %zu bytes\n", sizeof(double));
//     printf("Size of long double:    %zu bytes\n", sizeof(long double));
//     return 0;
// }





// #include<stdio.h>
// int main()
// {
// unsigned int a = 10;
// unsigned int b = -10; // observe this
// int c = 10; // change this to -10 and check
// signed int d = -10;
// printf("%u %u %d %d\n",a,b,c,d);
// printf("%d %d %d %d",a,b,c,d);
// return 0;
// }






// #include<stdio.h>
// int main()
// { int i=5; int j=5;
// printf("Beginning i value is %d\n",i); //5
// printf("Beginning j value is %d\n",i);
// ++i;// i++;
// printf("Later i value is %d\n",i);
// j--;// --j;
// printf("Later j value is %d\n",j); return 0;
// }






// #include <stdio.h>

// int main()
// {
//     int a=10;
//     printf("%d",a+a++);
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int x = 0;
// switch (x) {
//     default: printf("Default\n");break;  // No break
//     case 1: printf("One\n");break;
// }

//     return 0;
// }





// #include <stdio.h>

// int main()
// {
//     int a =10;
//     int b =8;
//     printf("%d\n",a&b);
//     printf("%d\n",b&a);
//     return 0;
// }






// #include <stdio.h>
// int main()
// {
// int *p;
// int a = 10;
// p = &a;
// printf("%d\n",(*p)+1); // 11 ,p is not changed
// printf("before *p++ %p\n",p); //address of p
// printf("%d\n",*p++); // same as *p and then p++ i.e 10
// printf("after *p++ %p\n",p);
// //address incremented by the size of type of value stored in it
// printf("\n%d",*p);
// return(0);
// }





// #include<stdio.h>

// int main()
// {
// int *p;
// int a = 10;
// p = &a;
// printf("%d\n",*p);//10
// printf("%d\n",(*p)++);// 10 value of p is used and then value of p is incremented
// printf("%d\n",*p); // 11
// return 0;
// }






// #include <stdio.h>
// int primeno(int);
// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     if(primeno(n))
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }

// int primeno(int n)
// {
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }







// #include <stdio.h>

// int po(int ,int);

// int main()
// {
//     int i ;
//     int j ;
//     printf("ENTER : ");
//     scanf("%d %d",&i,&j);
//     printf("\n%d",po(i,j));
//     return 0;
// }

// int po(int i, int j)
// {
//     if (j==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return i*po(i,j-1);    
//     }
// }








// #include<stdio.h>
// int main()
// { int a[5] = {12,33,45,66,17}; // a is an array
// printf("Using original array\n");
// for(int i = 0;i<5;i++)
// { printf("%d ",a[i]); }
// printf("\n");
// int *p[5]; // p is an array of pointers.
// for(int i = 0;i<5;i++)
// { p[i] = &a[i]; // address of a[i] stored in p[i] }
// printf("Using array of pointers\n");
// for(int i = 0;i<5;i++)
// { printf("%d ",*p[i]);
// // content at p[i] is displayed. All elements are displayed
// }

// printf("\n");
// }
// return 0;

// }








// #include <stdio.h>

// int search(int*,int,int);

// int main()
// {
//     int a[] = {10,20,30,40,50,60,70};
//     int n = sizeof(a)/sizeof(a[0]);
//     int key;

//     printf("Enter the element to search : ");
//     scanf("%d",&key);

//     int ans = search(a,n,key);

//     if(ans==-1)
//     {
//         printf("NOT FOUND");
//     }

//     else
//     {
//         printf("FOUND in index : %d",ans);
//     }

//     return 0;
// }

// int search(int a[], int n, int key)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]==key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }






// #include <stdio.h>

// int search(int *,int, int);
// int rsearch(int *, int, int, int);

// int main()
// {
//     int a[] = {10,20,30,40,50,60,70,80,90,100};
//     int n = sizeof(a)/sizeof(a[0]);
//     int key;

//     printf("ENTER : ");
//     scanf("%d",&key);

//     int ans = search(a,n,key);

//     if(ans==-1)
//     {
//         printf("NOT FOUND\n");
//     }

//     else
//     {
//         printf("FOUND in index : %d\n",ans);
//     }

//     int ans1 = rsearch(a,0,n,key);

//     if(ans1==-1)
//     {
//         printf("NOT FOUND\n");
//     }

//     else
//     {
//         printf("FOUND in index : %d\n",ans);
//     }

//     return 0;
// }

// int search(int a[],int n, int key)
// {
//     int low = 0;
//     int high = n;
    
//     while(low<=high)
//     {
//         int mid = (low + high)/2;
//         if(a[mid]==key)
//         {
//             return mid;
//         }
//         else if(a[mid]>key)
//         {
//             high = mid-1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int rsearch(int *a, int low, int high, int key)
// {
//     int mid = (high+low)/2;
//     if(low>high)
//     {
//         return -1;
//     }
//     else 
//     {
//         if(a[mid]==key)
//         {
//             return mid;
//         }
//         else if(a[mid]>key)
//         {
//             return rsearch(a,low,mid-1,key);
//         }
//         else
//         {
//             return rsearch(a,mid+1,high,key);
//         }
//     }    
// }










// #include <stdio.h>

// void sort(int *, int);

// int main()
// {
//     int a[]={10,50,4,29,56,87,99,34,76,23,67};
//     int n = sizeof(a)/sizeof(a[0]);

//     sort(a,n);

//     for (int i=0; i<n; i++)
//     {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

// void sort(int a[], int n)
// {
//     for (int i=0; i<n-1; i++)
//     {
//         int res = i;
//         for (int j=i+1; j<n; j++)
//         {
//             if(a[res]>a[j])
//             {
//                 res=j;
//             }
//         }
//         if(res!=i)
//         {
//             int temp = a[res];
//             a[res] = a[i];
//             a[i] = temp;
//         }
//     }
// }







// #include <stdio.h>

// int main()
// {
//     char a9[ ] = "atma\\0" ;
//     printf("%d\n",sizeof(a9));
//     printf("%s",a9);
//     return 0;
// }








// #include <stdio.h>

// int main()
// {
//     char a[100];
//     scanf(" %[^abcd]s",&a);
//     printf("%s",a);
//     return 0;
// }








// #include <stdio.h>
// # include <string.h>

// int main()
// {
//     printf("%d",strcmp("abcde","abc"));
//     return 0;
// }












// #include <stdio.h>

// int main()
// {
//     int b;
//     char a[100];
//     scanf("%d",&b);
//     // fflush(stdin);
//     scanf(" %[^\n]s",&a);
//     return 0;
// }










// #include <stdio.h>

// int main()
// {
//     int a[10]={[0]=5};
//     printf("%d",a[1]);
//     return 0;
// }






