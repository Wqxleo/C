#include <stdio.h>
int main()
{
    int M,N,sum,a,b,c;
    scanf("%d",&M);
    {
            for(c = 1;c <= M;c++)
            {
                scanf("%d",&N);
                sum = 0;
                for(a = 1;a <= N;a++)
              {
                scanf("%d",&b);
                if(b%2 == 0)
                    b = b;
                else
                    b = b + 1;
                sum = sum + b;
              }
            printf("Case %d: %d\n",c,sum);
            }
    }
    return 0;
}
