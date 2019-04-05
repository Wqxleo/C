#include <stdio.h>
#define MAX_STR_LEN 101
char * str_cat(char * t, char * s)
{
//    int i,j= 0,len1,len2;
//    for(i = 0;s[i] != '\0';i++)
//    {
//       len1 = i;
//    }
//    for(i = 0;t[i] != '\0';i++)
//    {
//       len2 = i;
//    }
//    for(i = len2+1,j = 0;i < len1 + len2 + 2,j < len1 + 1;i++,j++)
//    {
//        t[i] = s[j];
//    }
//    {
    char *p;
    p = t;
    while(*p != '\0')
        p++;
    while(*s != '\0')
        *p++ = *s++;
    *p = '\0';
    return t;
//    }
//    t[len1 + len2 +2] = '\0';
////    puts(t);
//    puts(s);
//    return t;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}
