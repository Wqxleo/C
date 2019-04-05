#include <stdio.h>
int main()
{
    int n,m = 3,i,flag = 1;
    int s[m];
    while(1)
    {
        if(scanf("%d",&n)==EOF)
        {

        }
        int data[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d",&data[i]);
        }
        if(flag%2 == 0)
        {
            if(m == n)
            {
                for(i = 0; i < n; i++)
                {
                    s[i] = s[i] + data[i];
                    printf("%d ",s[i]);
                }
            }
            else if(m > n)
            {
                for(i = 0; i < n; i++)
                {
                    s[i] += data[i];
                    printf("%d ",s[i]);
                }
                for(i = n; i < m; i++)
                {
                    printf("%d ",s[i]);
                }
            }
            else
            {
                for(i = 0; i < m; i++)
                {
                    s[i] += data[i];
                    printf("%d ",s[i]);
                }
                for(i = m; i < n; i++)
                {
                    printf("%d ",data[i]);
                }
            }
            printf("\n");
        }
        flag++;
        m = n;
        for(i = 0; i < m; i++)
        {
            s[i] = data[i];
        }
    }
    return 0;
}
