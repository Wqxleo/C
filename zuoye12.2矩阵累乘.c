#include<stdio.h>
#define MAX_SIZE 101
int main()
{
    int a[MAX_SIZE][MAX_SIZE],b[MAX_SIZE][MAX_SIZE],c[MAX_SIZE][MAX_SIZE],m1,n1,m2,n2,i,j,k;

    scanf("%d %d",&m1,&n1);
    if(m1==0 && n1==0) return 0;
    for(i=0; i<m1; i++)
        for(j=0; j<n1; j++)
            scanf("%d",&a[i][j]);
    while(1)
    {
        scanf("%d %d",&m2,&n2);
        if(m2==0 && n2==0) return 0;
        for(i=0; i<m2; i++)
            for(j=0; j<n2; j++)
                scanf("%d",&b[i][j]);
        if(n1==m2)
        {
            for(i=0; i<m1; i++)
                for(j=0; j<n2; j++)
                {
                    c[i][j]=0;
                    for(k=0; k<n1; k++)
                        c[i][j] += a[i][k]*b[k][j];
                }
            for(i=0; i<m1; i++)
            {
                for(j=0; j<n2; j++)
                {
                    if(j==0)
                        printf("%d",c[i][j]);
                    else printf(" %d",c[i][j]);
                    a[i][j]=c[i][j];
                }
                printf("\n");
            }
            printf("\n");
            m1=m1;
            n1=n2;
        }
        else
        {
            printf("Not satisfied the definition of matrix multiplication!\n");
            printf("\n");
            m1=m2;
            n1=n2;
            for(i=0; i<m1; i++)
                for(j=0; j<n1; j++)
                    a[i][j]=b[i][j];
        }
    }
}

