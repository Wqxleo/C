#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat");
         printf("\n");
        for(j = 1;j <= n;j++)
        {
            if(n!=7)
            printf("%3c ",' ');
        }

        for(i = 1;i <= 29;i++)
        {
            if((i+n)%7 == 0)
                {
                    printf("%3d",i);
                    printf("\n");
                }
                else
                    printf("%3d ",i);
        }
        printf(" 30");
        return 0;
}
