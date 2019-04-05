#include <stdio.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 1;i <= n;i++)
        {
            for(j = (n+1)/2-i;j>0;j--)
            {
                printf(" ");
            }
            for(k = 1;k <= 2*i-1;k++)
            {
                if(k == 1 || k == 2*i-1)
                    printf("*");
                else
                     printf(" ");
            }
            printf("\n");
            if(i == (n+1)/2)
                break;
        }
        for(i = 1;i <= (n-1)/2;i++)
        {
            for(j = 1;j <= i;j++)
            {
                printf(" ");
            }
            for(k = 1;k <= n-2*i;k++)
            {
                if(k == 1||k == n-2*i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
