#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    int count;
    char str[1001];
    char s[1001];
    int max;
    max = 0;
    while(gets(str) != NULL)
    {
        count = strlen(str);
        if(count > max)
        {
            max = count;
            strcpy(s,str);
        }
    }
    for(j = 0;j < max;j++)
    {
        if(s[j] >= 'a' && s[j] <= 'z')
        {
            s[j] = s[j] - 'a' + 'A';
        }
        printf("%c",s[j]);
    }
    return 0;
}
