#include <stdio.h>
int main()
{
    int m,i,j,k,a,count;
    scanf("%d",&m);
    int data1[1001];
    for(i = 1; i <= m; i++)
    {
        j = 0;
        int data[1001];
        while(scanf("%d",&data[j]) != EOF)
        {
            if(data[j] == 0)
            {
                count = j;
                break;
            }
            j++;
        }
        if(i%2 == 0)
        {
            if(k == count)
            {
                if(k == 0)
                {

                }
                else
                {
                    printf("%d",data1[0] + data[0]);
                    for(a = 1; a < count; a++)
                    {
                        data1[a] += data[a];
                        printf(" %d",data1[a]);
                    }
                    printf("\n");
                }
            }
            else if(k < count)
            {
                if(k > 0)
                {
                    printf("%d",data1[0] + data[0]);
                    for(a = 1; a < k; a++)
                    {
                        data1[a] += data[a];
                        printf(" %d",data1[a]);
                    }
                    for(a = k; a < count; a++)
                    {
                        printf(" %d",data[a]);
                    }
                    printf("\n");
                }
                else if(k == 0)
                {
                    printf("%d",data[0]);
                    for(a = 1;a < count; a++)
                    {
                        printf(" %d",data[a]);
                    }
                    printf("\n");
                }
            }
            else
            {
                if(count > 0)
                {
                    printf("%d",data1[0] + data[0]);
                    for(a = 1; a < count; a++)
                    {
                        data1[a] += data[a];
                        printf(" %d",data1[a]);
                    }
                    for(a = count; a < k; a++)
                    {
                        printf(" %d",data1[a]);
                    }
                    printf("\n");
                }
                if(count == 0)
                {
                    printf("%d",data1[0]);
                    for(a = 1; a < k; a++)
                    {
                        printf(" %d",data1[a]);
                    }
                    printf("\n");
                }
            }
        }
        if(i == m && m%2 == 1)
        {
            if(count == 0)
            {

            }
            else
            {
                printf("%d",data[0]);
                for(a = 1; a < count; a++)
                {
                    printf(" %d",data[a]);
                }
            }
        }
        for(k = 0; k <= count; k++)
        {
            data1[k] = data[k];
        }
        k = k - 1;
    }
    return 0;
}
