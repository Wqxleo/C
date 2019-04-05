#include <stdio.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)!= EOF)
    {
        if(n == 0)
            break;
       else if(n%2 == 0)
        {
            for(i = 1;i <= n;i++)
           {
                for(j = n;j > i;j--)
             {
               printf(" ");
             }
             for(k = 1;k <= 2*i -1;k++)
             {
                 printf("+");
             }
             printf("\n");
           }

        }
        else
        {
            for(i = 1;i <= n;i++)
            {
                for(j = 1;j < i;j++)
                {
                    printf(" ");
                }
                for(k = 2*(n-i) + 1;k >=1;k--)
                {
                 printf("+");
                }
            printf("\n");
            }

        }
        printf("\n");
    }
    return 0;
}
