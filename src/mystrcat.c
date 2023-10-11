#include "../includes/mystring.h"

void mystrcat(char * str, const char * str1)
{
    int len = mystrlen(str);
    int i;
    for(i = 0; *(str1 + i) != '\0'; i++){
        *(str + i + len) = *(str1 + i);
    }
    *(str + i + len) = '\0';
}