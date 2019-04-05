#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,j,len,a,b;
    char str[101],s[101];
    while(1)
    {
        memset(s,0,sizeof(s));
        gets(str);
        a = 0;
        b = 0;
        len = strlen(str);
        i = len - 1;
        while(isspace(str[i]))
        {
            b++;
            i--;
        }

        i=0;
        while(isspace(str[i]))
        {
            a++;
            i++;
        }
        j = 0;
        for(i = a; i < len-b; i++)
        {
           s[j] = str[i];
           printf("%c",s[j]);
           j++;
        }
        putchar('\n');
        if(strcmp(s,"END") == 0)
            break;
    }
    return 0;
}
