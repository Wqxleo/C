#include <stdio.h>
int main()
{
    int m,n,a,b,i,j,flag = 1;
    int data1[100][100];
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m == 0 && n == 0)
            break;
        else
        {
            int data[m][n];
            for(i = 0;i < m ; i++)
            {
                for(j = 0; j < n; j++)
                {
                    scanf("%d",&data[i][j]);
                }
            }
            if(flag%2 == 0)
            {
                if(a != m || b != n)
                    printf("Not satisfied the definition of matrix addition!\n");
                else
                {
                    for(i = 0; i < m; i++)
                    {
                       for(j = 0; j < n;j++)
                        {
                            data1[i][j] += data[i][j];
                        }
                    }
                    for(i = 0; i < m; i++)
                    {
                        printf("%d",data1[i][0]);
                        for(j = 1; j < n; j++)
                        {
                            printf(" %d",data1[i][j]);
                        }
                        printf("\n");
                    }
                }
                printf("\n");
            }
            a = m;
            b = n;
            for(i = 0; i < m; i++)
            {
               for(j = 0; j < n; j++)
                {
                    data1[i][j] = data[i][j];
                }
            }
        }
        flag++;
    }
    return 0;
}
