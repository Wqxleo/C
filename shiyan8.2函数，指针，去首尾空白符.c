#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_STR_LEN 101
char * trim(char *s)
{
    int len;
    len = strlen(s);
    int i;
    for(i = len-1;i >= 0;i--)
    {
        if(isspace(s[i]) == 0)
        {
           s[i+1] = '\0';
           break;
        }
    }
    for(i = 0;i < len;i++)
    {
        if(isspace(s[i]) == 0)
        {
           return &s[i];
        }
    }
}
int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}

