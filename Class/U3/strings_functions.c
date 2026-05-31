// #include <stdio.h>
// #include <string.h>

// int main()
// {    
//     char str[] = "TARARjhdujvdTARAR";
//     char str1[100];
//     char str2[200];

//     printf("%lu\n",strlen(str));

//     strcpy(str1,str);
//     printf("%s\n",str1);
    
//     strncpy(str2,str,5);
//     printf("%s\n",str2);

//     strcat(str1,str2);
//     printf("%s\n",str1);

//     strncat(str2,str1,5);
//     printf("%s\n",str2); 

//     char *p = strchr(str,'j');
//     printf("%ld",p-str);

//     char *p2 = strrchr(str,'j');
//     printf("\n%ld",p2-str);

//     char *p1 = strstr(str,"TARAR");
//     printf("\n%ld\n",p1-str);

//     char fruits[ ] = "apple,banana,grape";
//     char *token = strtok(fruits, ",");
//     while (token != NULL) 
//     {
//         printf("Token: %c\n", *token);
//         token = strtok(NULL, ",");
//     }

//     return 0;
// }







#include <stdio.h>

int main()
{
    // int my_strlen(char *str)
    // { if (!(*str)) return 0;
    // else return 1+my_strlen(++str);
    // }

    // int my_strlen(char *str)
    // { if (!(*str)) return 0;
    //  else return 1+my_strlen(str+1);
    // } 

    // int my_strlen(char *str)
    // { if (!(*str)) return 0;
    // else return 1+my_strlen(str++);
    // } 


    char mystr[ ] = "pes";
    printf("Length is %d\n", my_strlen(mystr)); 
    return 0;
}