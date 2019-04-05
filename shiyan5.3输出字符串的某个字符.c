#include <stdio.h>
#include <string.h>
int main()
{
    char str[11];
    int i,k,count;
    scanf("%s",&str);
    scanf("%d",&k);
    count = strlen(str);
    if(k > count)
        printf("error");
    else
    {
        printf("%c",str[k-1]);
    }
    return 0;
}
