#include <stdio.h>
int main()
{
    int data[10];
    int mark[10];
    int i,a,k,min;
    int val;
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&data[i]);
    }
    scanf("%d",&a);
    for(i = 0;i < 10;i++)
    {
       mark[i]=data[i]-a;
       if(mark[i] < 0)
       {
           mark[i] = -mark[i];
       }
    }
    min = mark[0];
    for(i = 1;i<10;i++)
    {
        if(mark[i] < min)
        {
            min = mark[i];
            k = i;
        }
    }
    printf("%d",data[k]);
    return 0;
}
