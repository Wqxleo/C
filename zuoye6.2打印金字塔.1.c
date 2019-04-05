#include <stdio.h>
int main()
{
    int n,a,i,j,k;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        a = i;
        if(a > 9)
            a = a%10;
        for(j = 1;j <=n-i;j++)
            printf(" ");
        for(k = 1;k <= 2*i - 1;k++)
            {
                printf("%d",a);
            }
            printf("\n");
    }
    return 0;
}
