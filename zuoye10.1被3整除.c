#include <stdio.h>
#include <string.h>
int main()
{
    int m,i,j,len,sum;
    scanf("%d",&m);
    char str[101];
    gets(str);
    for(i = 1;i <= m;i++)
    {
        sum = 0;
        gets(str);
        len = strlen(str);
        for(j = 0;j < len;j++)
        {
           sum = sum + (str[j] - '0');
        }
        if(sum%3 == 0)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
