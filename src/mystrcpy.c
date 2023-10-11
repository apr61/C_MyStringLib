
void mystrcpy(char * target, const char* src)
{
    int i;
    for(i=0; *(src + i) != '\0'; i++){
        *(target + i) = *(src + i);
    }
    *(target + i) = '\0';
}