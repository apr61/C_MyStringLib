#include <stdio.h>
#include <stdlib.h>
#include "./includes/mystring.h"

enum operations_en
{
    EXIT,
    LENGTH,
    COMPARE,
    COPY,
    CONCAT,
    REVERSE
};

int main()
{
    char str[MAX];
    char str1[MAX];
    int len = 0;
    int res = 0;
    int opt;
    while (1)
    {
        printf("My String Lib\n");
        printf("1. String length\n");
        printf("2. String compare\n");
        printf("3. String copy\n");
        printf("4. String concat\n");
        printf("5. String reverse\n");
        printf("0. Exit\n");
        printf("Enter your operation :: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case LENGTH:
            printf("String Length\n");
            fflush(stdin);
            printf("Enter a string :: ");
            gets(str);
            fflush(stdout);
            len = mystrlen(str);
            printf("String length of %s is %d\n", str, len);
            break;
        case COMPARE:
            printf("String Compare\n");
            printf("Enter 2 strings to compare\n");
            fflush(stdin);
            printf("Enter string 1 :: ");
            gets(str);
            fflush(stdout);
            fflush(stdin);
            printf("Enter string 2 :: ");
            gets(str1);
            fflush(stdout);
            res = mystrcmp(str, str1);
            if (res == 0)
            {
                printf("both strings are equal\n");
            }
            else if (res == 1)
            {
                printf("String 1 is greater than str2\n");
            }
            else
            {
                printf("String 1 is less than str2\n");
            }
            break;
        case COPY:
            printf("String Copy\n");
            fflush(stdin);
            printf("Enter a string :: ");
            gets(str);
            fflush(stdout);
            mystrcpy(str1, str);
            printf("Copied String :: %s\n", str1);
            break;
        case CONCAT:
            printf("String Concat\n");
            fflush(stdin);
            printf("Enter a string :: ");
            gets(str);
            fflush(stdout);
            fflush(stdin);
            printf("Enter string to be concatinated with above string :: ");
            gets(str1);
            fflush(stdout);
            mystrcat(str, str1);
            printf("Concatenated string :: %s\n", str);
            break;
        case REVERSE:
            printf("String Reverse\n");
            fflush(stdin);
            printf("Enter a string :: ");
            gets(str);
            fflush(stdout);
            reverse(str);
            printf("Reversed String is %s\n", str);
            break;
        default:
            printf("Exiting application...");
            exit(0);
        }
    }
}