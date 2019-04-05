#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11
int strToInt(char str[])
{
    int len,i,j=0,flag = 1,sum = 0;
    char data[MAX_STR_LEN];
    len = strlen(str);
    if(str[0] >= '0' && str[0] <= '9')
    {
        for(i = 0;i < len;i++)
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                data[j] = str[i];
                j++;
            }
            else
                break;

        }
//        for(i = 0;i < j;i++)
//        {
//            printf("%c\n",data[i]);
//        }
       for(i = j-1;i >= 0;i--)
       {
          sum += (data[i] - '0')*flag;
          flag *= 10;
       }
       return sum;
    }
    else if(str[0] == '\0')
            return -1;
    else
        return 0;
}
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
