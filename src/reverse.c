#include "../includes/mystring.h"

void reverse(char *str)
{
    int len = mystrlen(str);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = *(str + i);
        *(str + i) = *(str - i + len - 1);
        *(str - i + len - 1) = temp;
    }
}