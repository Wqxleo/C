#include <stdio.h>
#include <string.h>
int find(char str[], char ch)
{
    int len;
    len = strlen(str);
    static int i = 0;
    for(;i < len;i++)
    {
        if(str[i] == ch)
        {
          i++;
          return i-1;
        }
    }
    return -1;
}
int main()
{
    char str[1001], ch;
    int pos;
    gets(str);
    ch = getchar( );
    pos = find(str, ch);
    while (pos != -1)
    {
        printf("%d\n", pos);
        pos = find(str, ch);
    }
    return 0;
}

