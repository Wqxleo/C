#include <stdio.h>
int main()
{
    int n,i,l,max,min;
    while(scanf("%d",&n) != 0)
    {
        int data[n];
        for(i = 0;i < n;i++)
        {
            scanf("%d",&data[i]);
        }
        max = data[0];
        min = data[0];
        for(i = 1;i< n;i++)
        {
            if(data[i] > max)
                max = data[i];
            if(data[i] < min)
                min = data[i];
        }
       l = 2*(max - min);
       printf("%d\n",l);
    }
    return 0;
}
