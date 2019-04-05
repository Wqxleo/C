#include<stdio.h>
int main()
{
    int m,n,i,j,k,a;
    scanf("%d",&m);
    for(i = 1;i <= m;i++)
    {
        a = 1;
        scanf("%d",&n);
        int data[n];
        for(j = 0;j < n;j++)
        {
            scanf("%d",&data[j]);
        }
        printf("%d",data[0]);
        for(j = 0;j < n;j++)
        {
           for(k = a;k < n;k++)
           {
               if(data[k] != data[j])
               {
                   printf(" %d",data[k]);
                   a = k;
                   j = k - 1;
                   break;
               }
           }
        }
        if(i < m)
        printf("\n");
    }
    return 0;
}
