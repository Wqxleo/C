#include <stdio.h>
int main()
{
    int t,n,i,j,max;
    scanf("%d",&t);
    for(i = 1;i <= t;i++)
    {
        int mark[10001] = {0};
        int data[10001] = {0};
        scanf("%d",&n);
        for(j = 0;j < n;j++)
        {
            scanf("%d",&data[j]);
            mark[data[j] - 1]++;
        }
        max = mark[0];
        for(j = 1;j < 10000;j++)
        {
            if(mark[j] > max)
                max = mark[j];
        }
        for(j = 0;j < 10000;j++)
        {
            if(mark[j] == max)
            printf("%d %d\n",max,j + 1);
        }
    }
    return 0;
}
