#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]) //conventionally argc and argv, Can use any variable
{ printf("count of arguments are %d\n",argc); // argc =4
printf("argv[0] is %s\n",argv[0]);
printf("argv[1] is %s\n",argv[1]);
printf("argv[2] is %s\n",argv[2]);
printf("argv[3] is %s\n",argv[3]);
printf("Sum is is %d\n",atoi(argv[1])+ atoi(argv[2])+ atoi(argv[3]));
// The C library function atoi(str) converts the string argument str to an integer
//(type int). If no valid conversion could be performed, it returns 0
return 0;
}




// #include<stdio.h>
// #include<stdlib.h>
// int main(int argc,char *argv[])
// {
// int i;
// int sum = 0;
// for(i = 0; i < argc; i++)
// sum = sum + atoi(argv[i]);
// printf("Sum of command line arguments are %d\n",sum);
// return 0;
// }