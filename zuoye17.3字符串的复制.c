#include <stdio.h>
#define MAX_STR_LEN 101
char * str_cpy(char *t, char *s)
{
    char *p;
    p = t;
    while(*s != 0)
      *p++ = *s++;
    *p = 0;
    return t;
}
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL)
    {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}

