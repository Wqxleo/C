#include <stdio.h>
int main()
{
    int m,n,a,i,j,k,p;
    scanf("%d",&m);
    for(i = 1;i <= m;i++)
    {
        scanf("%d",&n);
        if(n > 0)
        {
            for(j = 1;j <= n;j++)
            {
                a = j;
                if(a > 9)
                    a = a%10;
                for(k = 1;k <= n - j;k++)
                {
                    printf(" ");
                }
                for(p = 1;p <= 2*j - 1;p++)
                {
                    printf("%d",a);
                }
                printf("\n");
            }
            printf("\n");
        }

            else if(n < 0)
        {
            n = -n;
           for(j = n;j >= 1;j--)
          {
              a = j;
              if(a > 9)
                a = a%10;
            for(k = 1;k <= n -j;k++)
            {
                printf(" ");
            }
            for(p =2*j - 1;p > 0;p--)
            {
                printf("%d",a);
            }
            printf("\n");
         }
         printf("\n");
        }
  }
    return 0;
}
