#include <stdio.h>
int main()
{
    int a,n,b,i,j,max;
    scanf("%d",&n);
    for(j = 1;j <= n;j++)
    {
        scanf("%d",&a);
        int data[a];
        for(i = 0;i<a;i++)
        {
            scanf("%d",&data[i]);
        }
        max = data[0];
        b = 0;
        for(i = 1;i < a;i++)
        {
            if(data[i]>max)
                {
                    max=data[i];
                    b = i;
                }
        }
        printf("Max = %d,Positions = %d",max,b);
        for(i = 0;i < a;i++)
        {
            if(data[i] == max&&i!=b)
            {
                 b = i;
                printf(" %d",b);
            }
        }
        if(j < n)
            printf("\n");
    }
    return 0;
}
