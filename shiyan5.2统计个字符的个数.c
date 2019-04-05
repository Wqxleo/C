#include <stdio.h>
#include <string.h>
int main()
{
    int m,i,j,count;
    int a,b,c,d;
    char str[101];
    char s[101];
    scanf("%d",&m);
    gets(s);
    printf("Case Digits Lowers Uppers Others\n");
    for(i = 1;i <= m;i++)
    {
        gets(str);
        count = 0;
        a=b=c=d=0;
        count = strlen(str);
        for(j = 0;str[j] != '\0';j++)
        {
            if(str[j]>='0' && str[j] <= '9')
            a = a + 1;
        if(str[j]>='A'&&str[j]<='Z')
            b = b +1;
        if(str[j]>='a'&&str[j]<='z')
            c = c + 1;
        }
        printf("%-5d%-7d%-7d%-7d%d\n",i,a,c,b,count-a-b-c);
    }
    return 0;
}
