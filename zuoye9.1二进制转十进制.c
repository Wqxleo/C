#include <stdio.h>
#include <string.h>
int main()
{
    char str[32] = {0};
    int i,n,flag;
    long long sum;
    while(gets(str) != NULL)
    {
        sum = 0;
        flag = 1;
        n = strlen(str);
        for(i = n-1;i >=0;i--)
        {
            sum = sum + (str[i]-'0')*flag;
            flag = 2*flag;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
