#include <stdio.h>
int main()
{
    int M,N,i,a,m,sum;
    scanf("%d",&M);+
    for(i=1;i<=M;i++)
    {
        scanf("%d",&N);
        sum=0;
        for(a=1;a<=N;a++)
        {
            scanf("%d",&m);
            if ( m%2==0 )
                sum += m;
            else
                sum += m+1;
        }
        printf("Case %d: %d",i,sum);
        if(i != M)
            printf("\n");
    }
    return 0;

}
