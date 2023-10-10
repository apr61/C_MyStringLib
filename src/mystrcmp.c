#include "../includes/mystring.h"

int mystrcmp(const char * str1, const char * str2)
{
    for(int i=0;i< *(str1 + i) != '\0';i++){
        if(*(str1 + i) > *(str2 + i)){
            return 1;
        }
        if(*(str1 + i) < *(str2 + i)){
            return -1;
        }
    }
    return 0;
}