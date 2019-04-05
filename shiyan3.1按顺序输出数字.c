#include <stdio.h>
int main()
{
    int data,k,n,x;
    scanf("%d%d",&k,&n);
    if(n > 0)
    {
        do
    {
        if(k+1>k&&k-1<k)
            {
                printf("%d",k);
                k = k++;
            }
    }while(k<data+n);
    }
    else if(n<0)
    {
        x = k+n+1;
        do
        {
            if(x+1>x&&x-1<x)
            {
                printf("%d",x);
                x = x++;
            }
        }while(x<=data);
    }
    return 0;
}
