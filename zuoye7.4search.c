#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int data[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&data[i]);
    }
    while(scanf("%d",&j) != EOF)
    {
         if(j > 0 && j <= n)
            printf("%d\n",data[j-1]);
         else if(j < 0 && j >= -n)
            printf("%d\n",data[n+j]);
         else
            printf("OUT OF RANGE\n");
    }
    return 0;
}
