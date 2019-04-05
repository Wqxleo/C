#include <stdio.h>
int main()
{
    double a,x,y;
    int i,n;
    while(scanf("%lf%d",&a,&n )!= EOF )
    {
        if(n == 0)
        x = a/2.0;
        else
        {
            y = a/2.0;
            for(i = 1;i <= n;i++)
           {
           x= (y + a/y)/2.0;
           y = x;
           }
        }
        printf("%.3lf\n",x);
    }
  return 0;
}
