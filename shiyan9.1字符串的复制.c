#include <stdio.h>
#define MAX_STR_LEN 101
char * str_cpy(char * t, char * s, int n)
{
   int i;
   for(i = 0;s[i] != '\0' && i < n;i++)
   {
       t[i] = s[i];
   }
   t[i] = '\0';
   return t;
}
int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        p = str_cpy(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}
