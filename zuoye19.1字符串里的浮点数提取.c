#include <stdio.h>
#define MAX_STR_LEN 11
#include <string.h>
double strToDouble(char str[])
{
    int i,j = 0,k = 0,ad,len;
    len = strlen(str);
    char s1[MAX_STR_LEN],s2[MAX_STR_LEN];
    double data = 0,flag = 0.1;
    for(i = 0;i < len;i++)
    {
        if(str[i] == '.' || str[i] >= '0' && str[i] <= '9')
        {
            s1[j] = str[i];
            j++;
        }
    }
//    puts(s1);

    for(i = 0;i < j;i++)
    {
        if(s1[i] >= '0' && s1[i] <= '9')
        {
           s2[k] = s1[i];
           k++;
        }
    }
    for(i = 0; i < j;i++)
    {
        if(s1[i] == '.')
        {
           ad = i;
           break;
        }
        else
            ad = k;
    }

    for(i = 0;i < k;i++)
    {
        data += (s2[i] - '0')*flag;
        flag *= 0.1;
       printf("%lf %lf\n",data,flag);
    }
    flag = 1;
    for(i = 0;i < ad;i++)
        flag *= 10.0;
    data *= flag;
    if(str[0] == '-')
    return -data;
    else
        return data;
}
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
