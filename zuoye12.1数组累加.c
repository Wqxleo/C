#include <stdio.h>
int main()
{
    int m,n,i,j,count;
    scanf("%d",&m);
    int data1[1000];
    for(i = 1; i <= m; i++)
    {
        scanf("%d",&n);
        int data[n];
        for(j = 0; j < n; j++)
        {
            scanf("%d",&data[j]);
        }
        if(i > 1)
        {
            if(n == count)
            {
                if(n == 0)
                {
                  printf("\n");
                }
                else
                {
                    for(j = 0;j < n;j++)
                    {
                        data1[j] += data[j];
                    }
                    printf("%d",data1[0]);
                    for(j = 1;j < n;j++)
                    {
                        printf(" %d",data1[j]);
                    }
                    printf("\n");
                }
            }
            else if(n < count)
            {
                if(n == 0)
                {
                    printf("%d",data1[0]);
                    for(j = 1;j < count;j++)
                    {
                        printf(" %d",data1[j]);
                    }
                    printf("\n");
                }
                else
                {
                    for(j = 0;j < n;j++)
                    {
                        data1[j] += data[j];
                    }
                    printf("%d",data1[0]);
                    for(j = 1;j < count;j++)
                    {
                        printf(" %d",data1[j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                if(count == 0)
                {
                    printf("%d",data[0]);
                    for(j = 1;j < n;j++)
                    {
                        printf(" %d",data[j]);
                    }
                    printf("\n");
                }
                else
                {
                    for(j = 0;j < count;j++)
                    {
                        data1[j] += data[j];
                    }
                    for(j = count;j < n;j++)
                    {
                        data1[j] = data[j];
                    }
                    printf("%d",data1[0]);
                    for(j = 1;j < n;j++)
                    {
                        printf(" %d",data1[j]);
                    }
                    printf("\n");
                }
            }
        }
        count = n;
        for(j = 0; j < n; j++)
        {
            data1[j] = data[j];
        }
        if(i == m)
        {
            if(n == 0)
            {

            }
            else
            {
                printf("%d",data[0]);
                for(j = 1; j < n; j++)
                {
                    printf(" %d",data[j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
