#include <stdio.h>
int main()
{
    int N,sum,a,b;
    while(scanf("%d",&N) != EOF)
    {
        if(N == 0)
        break;
            sum = 0;
        for(a = 1;a <= N;a++)
            {
                scanf("%d",&b);
                sum = sum + b;
            }
            printf("%d\n",sum);
    }


}
