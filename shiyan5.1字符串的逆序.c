#include <stdio.h>
#include <string.h>
int main()
{
    int i,count;
    char str[101];
    char s[101];
    gets(str);
    count = strlen(str);
    for(i = 0;i < count;i++)
    {
      s[i] = str[count - i-1];
      printf("%c",s[i]);
    }
    return 0;
}
