#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,length;
    char str[1001];
    scanf("%d",&n);
    gets(str);
    for(i = 1;i<= n;i++)
    {
       gets(str);
       length = strlen(str);
       printf("case %d:length=%d.",i,length);
       if(i < n)
        printf("\n");
    }
    return 0;
}
