#include <stdio.h>
int main()
{
    int n,i,j,k,a,b;
    while(scanf("%d",&n)!= EOF)
    {
        for(i = 0; i < (n+1)/2; i++)
        {
            for(j = 0; j < n/2-i; j++)
                printf(" ");
            if(i == 0)
                printf("*");
            else
                for(j = 1; j <= 2*i+1; j++)
                {
                    if(j == 1 || j == 2*i+1)
                        printf("*");
                    else
                        printf(" ");
                }
            printf("\n");
        }
        for(i = n/2;i > 0;i--)
        {
            for(j = 0; j < n/2+1-i; j++)
                printf(" ");
            if(i == 1)
                printf("*");
            else
                for(j = 1; j <= 2*i-1; j++)
                {
                    if(j == 1 || j == 2*i-1)
                        printf("*");
                    else
                        printf(" ");
                }
            printf("\n");
        }
    }
    return 0;
}
