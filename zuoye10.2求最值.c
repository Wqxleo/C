#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,len,len1,len2,len3,add;
    char str[1001],s[1001],max[1001]= {0},min[1001],s1[1001];
    int flag = 1;
    while(scanf("%s",str) != EOF)
    {
        add = 0;
        len = strlen(str);
        for(i = 0; i < len-1; i++)
        {
            add += (str[i]-'0');
            if(add != 0)
            {
                break;
            }
        }
        j = 0;
        for(k = i; k < len; k++)
        {
            s[j] = str[k];
            j++;
        }
        len1 = strlen(s);
        len2 = strlen(max);
        if(len1 > len2)
        {
            strcpy(max,s);
        }
        else if(len1 == len2)
        {
            if(strcmp(s,max) > 0)
            {
                strcpy(max,s);
            }
        }
        if(flag == 1)
        {
            strcpy(min,s);
        }
        len3 = strlen(min);
        if(len1 < len3)
        {
            strcpy(min,s);
        }
        else if(len1 == len3)
        {
            if(strcmp(min,s) > 0)
                strcpy(min,s);
        }
        flag++;
    }
    printf("The maximum value is : ");
    puts(max);
    printf("The minimum value is : ");
    puts(min);
    return 0;
}
