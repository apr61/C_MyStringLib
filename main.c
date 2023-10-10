#include <stdio.h>
#include "./includes/mystring.h"

int main(){
    char str[MAX];
    char str1[MAX];
    int len = 0;
    int res = 0;
    printf("Enter a string :: ");
    gets(str);
    len = mystrlen(str);
    printf("String length of %s is %d\n", str, len);
    printf("Enter 2 strings to compare :: \n");
    printf("Enter string 1 :: ");
    gets(str);
    printf("Enter string 2 :: ");
    gets(str1);
    res = mystrcmp(str, str1);
    if(res == 0){
        printf("both strings are equal\n");
    }else if (res == 1){
        printf("String 1 is greater than str2\n");
    }else{
        printf("String 1 is less than str2\n");
    }
}