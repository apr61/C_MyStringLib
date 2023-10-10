
#include "../includes/mystring.h"

int mystrlen(const char *str){
    int len = 0;
    for(int i = 0; str[i]; i++){
        len++;
    }
    return len;
}