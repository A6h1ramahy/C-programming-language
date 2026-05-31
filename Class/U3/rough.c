// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct student // Template declaration: defines what a 'student' looks like
// {
//  int roll_no; // Member 1: roll number
//  char name[20]; // Member 2: name (character array)
//  int marks; // Member 3: marks
// };
// int main()
// {
//  struct student s1; // Declare a structure variable of type 'student'
//  printf("Before assigning, Student Details:\n");
//  printf("Roll Number: %d\n", s1.roll_no);
//  printf("Name: %s\n", s1.name);
//  printf("Marks: %d\n", s1.marks);
//  // Assigning values to members
//  s1.roll_no = 101;
//  s1.marks = 87;
//  strcpy(s1.name, "Rahul"); // Use string handling function to assign name
//  // Displaying values
//  printf("After assigning Student Details:\n");
//  printf("Roll Number: %d\n", s1.roll_no);
//  printf("Name: %s\n", s1.name);
//  printf("Marks: %d\n", s1.marks);
//  struct student s3 = {44, "abc"}; // Partial Initialization
//  printf("%d %d %s", s3.marks, s3.roll_no, s3.name);
//  return 0;
// } 





// # include<stdio.h>
// // # pragma pack(1)
// struct example {
//  unsigned int a : 3;
//  unsigned int : 2; // unnamed 2-bit field (padding)
//  unsigned int b : 4;
// };
// int n;

// int main()
// {
//     // struct Status s1;
//     printf("%d\n",sizeof(struct example));
//     // printf("%d",sizeof(n));
//     // s1.bin1=0;
//     // printf("\n%d",s1.bin1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct
// { unsigned int age : 3; } Age;
// int main( )
// {
//  Age.age = 4;
//  printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
//  printf( "Age.age : %d\n", Age.age );
//  Age.age = 7;
//  printf( "Age.age : %d\n", Age.age );
//  Age.age = 8;
//  printf( "Age.age : %d\n", Age.age );
//  return 0;
// } 





// #include <stdio.h>
// #include <string.h>
// union Data {
//  int i;
//  float f;
//  char str[20];
//  }; 
// int main() {
//  union Data d;
//  // Assign to int
//  d.i = 100; printf("After assigning int:\n");
//  printf("%d\n",sizeof(union Data));
//  printf("d.i = %d\n", d.i); printf("d.f = %f\n", d.f);
//  printf("d.str = %s\n\n", d.str); // May print garbage
//  // Assign to float
//  d.f = 3.14; printf("After assigning float:\n");
//  printf("%d\n",sizeof(union Data));
//  printf("d.i = %d\n", d.i); // May print garbage
//  printf("d.f = %f\n", d.f);
//  printf("d.str = %s\n\n", d.str); // May print garbage 
//  // Assign to string
//  strcpy(d.str, "Hello");
//  printf("%d\n",sizeof(union Data));
//  printf("After assigning string:\n");
//  printf("d.i = %d\n", d.i); // May print garbage
//  printf("d.f = %f\n", d.f); // May print garbage
//  printf("d.str = %s\n", d.str);
//  return 0;
// }






// #include<stdio.h>
// union Z
// { int a; int b[3]; };
// int main()
// {
//  union Z z; z.a = 23;
//  printf("size of Z is %d\n",sizeof(z));
//  printf("%d %d %d %d",z.a,z.b[0], z.b[1],z.b[2]);
//  return 0;
// } 





// #include<stdio.h>
// enum months{ jan,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec };
// int main()
// { printf("%d\n",mar-jan); // valid
//  printf("%d\n",mar*jan); // valid
//  printf("%d\n",mar&&feb); // valid
//  //mar++; //error : mar is a constant
//  //printf("after incrementing %d\n",mar); // error
//  enum months m=feb;
//  m=(enum months)(m + feb); // m can be changed. m is a variable of type enum months.
//  // But all constants in enum cannot be changed its value
//  printf("m, after incrementing %d\n",m);
//  for(enum months i=jan;i<=dec;i++) // loop to iterate through all constants in enum
//  { printf("%d\n", i); }
//  return 0;
// }


// #include <stdio.h>

// int main() {
//     float a[2];
//     char c;
// 	for (int i=0; i<2; i++)
// 	{
// 	    scanf(" %f",a[i]);
// 	}
// 	scanf(" %c",&c);
// 	float ans;
// 	if (c=='+')
// 	{
// 	    ans = a[0] + a[1];
// 	    printf("%.2f",ans);
// 	}
// 	else if (c=='-')
// 	{
// 	    ans = a[0] - a[1];
// 	    printf("%.2f",ans);
// 	}
// 	else if (c=='*')
// 	{
// 	    ans = a[0] * a[1];
// 	}
// 	else
// 	{
// 	    ans = a[0]/a[1];
// 	    printf("%.2f",ans);
// 	}
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     printf("Hello")
//     return 0;
// }





// #include <stdio.h> 
// #include <string.h> 
// struct  person
// {    unsigned int age : 3;    } Age; 
// int main( )  
// {
//    Age.age = 4; 
//    printf( "Sizeof( Age ) : %d\n", sizeof(Age) ); 
//    printf( "Age.age : %d\n", Age.age ); 
//    Age.age = 7; 
//    printf( "Age.age : %d\n", Age.age ); 
//    Age.age = 8; 
//    printf( "Age.age : %d\n", Age.age );   
//    return 0; 
// } 






