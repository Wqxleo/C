#include <stdio.h>
int main()
{
    int n,i,a,b,flag;
    scanf("%d",&n);
    int data[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d",&data[i]);
    }
    while(scanf("%d",&a) != EOF)
    {
        flag = 0;
        for(i = 0; i < n; i++)
        {
            if(data[i] == a)
            {
                flag = 1;
                b = i;
                printf("%d",i+1);
                break;
            }
        }
        for(i = b + 1;i < n;i++)
        {
            if(data[i] == a)
            {
                flag = 1;
                printf(" %d",i+1);
            }
        }
        if(flag == 0)
        {
            printf("NOT FOUND");
        }
        printf("\n");
    }
    return 0;
}
