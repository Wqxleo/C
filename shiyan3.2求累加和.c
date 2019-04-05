#include <stdio.h>
int main(void)
{
    int n,flag,m;
    double i,sum;
    m = 0;
    while(scanf("%d",&n)!=EOF)
    {
        sum = 0;
        flag = 1;
        for(i = 1;i <= 2*n-1;i = i+2)
    {
        sum = sum + flag*(i/(i+1));
        flag = -flag;
    }
    m += 1;
    printf("Case %d : %.2lf\n",m,sum);
    }
    return 0;
}
