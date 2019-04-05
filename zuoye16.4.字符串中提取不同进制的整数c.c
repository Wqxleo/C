#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100
int strToInt(char str[], int base)
{
    int len,i,j=0,flag = 1,sum = 0;
    int flag1 = 0;
    int data[MAX_STR_LEN];
    len = strlen(str);
    if(str[0] == '+' || str[0] == '-')
    {
        if(str[0] == '-')
            flag1 = 1;

        for(i = 1; i < len; i++)
        {
            if(base == 2)
            {
                if(str[i] >= '0' && str[i] < '2')
                {
                    data[j] = str[i] - '0';
                    j++;
                }
            }
            if(base == 8)
            {
                if(str[i] >= '0' && str[i] < '8')
                {
                    data[j] = str[i] - '0';
                    j++;
                }
            }
            if(base == 10)
            {
                if(str[i] >= '0' && str[i] <= '9')
                {
                    data[j] = str[i] - '0';
                    j++;
                }
            }
            if(base == 16)
            {
               if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'F' || str[i] >= 'a' && str[i] <= 'f')
                {
                      if(str[i] == 'a' || str[i] == 'A')
                        data[j] = 10;
                      else if(str[i] == 'b' || str[i] == 'B')
                        data[j] = 11;
                      else if(str[i] == 'c' || str[i] == 'C')
                        data[j] = 12;
                      else if(str[i] == 'd' || str[i] == 'D')
                        data[j] = 13;
                      else if(str[i] == 'e' || str[i] == 'E')
                        data[j] = 14;
                      else if(str[i] == 'f' || str[i] == 'F')
                        data[j] = 15;
                      else
                        data[j] = str[i] - '0';
                      j++;
                }
            }
        }
        for(i = j-1; i >= 0; i--)
        {
            sum += data[i]*flag;
            flag *= base;
//            printf("%d  %d\n",base,data[i]);
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
            if(base == 2)
            {
                if(str[i] >= '0' && str[i] < '2')
                {
                    data[j] = str[i] - '0';
                    j++;
                }
            }
            if(base == 8)
            {
                if(str[i] >= '0' && str[i] < '8')
                {
                    data[j] = str[i] - '0';
                    j++;
                }
            }
            if(base == 10)
            {
                if(str[i] >= '0' && str[i] <= '9')
                {
                    data[j] = str[i] -'0';
                    j++;
                }
            }
            if(base == 16)
            {
               if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'F' || str[i] >= 'a' && str[i] <= 'f')
                {
                      if(str[i] == 'a' || str[i] == 'A')
                        data[j] = 10;
                      else if(str[i] == 'b' || str[i] == 'B')
                        data[j] = 11;
                      else if(str[i] == 'c' || str[i] == 'C')
                        data[j] = 12;
                      else if(str[i] == 'd' || str[i] == 'D')
                        data[j] = 13;
                      else if(str[i] == 'e' || str[i] == 'E')
                        data[j] = 14;
                      else if(str[i] == 'f' || str[i] == 'F')
                        data[j] = 15;
                      else
                        data[j] = str[i] - '0';
                      j++;
                }
            }
        }
        for(i = j-1; i >= 0; i--)
        {
            sum += data[i]*flag;
            flag *= base;
//            printf("%d  %d\n",base,data[i]);
        }
        return sum;
    }
}
int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}
