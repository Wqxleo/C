#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 12
int strToInt(char str[])
{
    int len,i,j=0,flag = 1,sum = 0;
    int flag1 = 0;
    char data[MAX_STR_LEN];
    len = strlen(str);
    if(str[0] == '+' || str[0] == '-')
    {
        if(str[0] == '-')
            flag1 = 1;
        for(i = 1; i < len; i++)
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                data[j] = str[i];
                j++;
            }
        }
        for(i = j-1; i >= 0; i--)
        {
            sum += (data[i] - '0')*flag;
            flag *= 10;
        }
        if(flag1 == 1)
            return -sum;
        else
            return
                sum;
    }
    else
    {
        for(i = 0; i < len; i++)
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                data[j] = str[i];
                j++;
            }

        }
        for(i = j-1; i >= 0; i--)
        {
            sum += (data[i] - '0')*flag;
            flag *= 10;
        }
        return sum;
    }
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
