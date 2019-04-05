#include <stdio.h>
int main()
{
    int m,a,i,x,x1;
    int c;
    scanf("%d",&m);
    a = m;
    int n[m];
    int sum[a];
    sum[0] = 0;
    for(i = 0; i < m; i++)
    {
        scanf("%d",&n[i]);
        sum[i+1] = sum[i] + n[i];
    }
    while(scanf("%d",&x) != EOF)
    {
        x1 = x%sum[m];
        if(x1 == 0)
        {
            printf("Class %c : %d\n",'A'+m-1,n[m-1]);
        }
        else if(x1 <= sum[1] && x1 > 0)
        {
            printf("Class A : %d\n",x1);
        }
        else
        {
            for(i = 1,c = 'B'; i < m,c < 'B' + m; i++,c++)
            {
                if(x1 <= sum[i+1] && x1 > sum[i])
                    printf("Class %c : %d\n",c,x1-sum[i]);
            }

        }
    }
    return 0;
}
