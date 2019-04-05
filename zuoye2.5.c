#include <stdio.h>
int main()
{
    double m,o,r;
    int x,y;
    scanf("%lf %lf %lf\n",&m,&o,&r);
    scanf("%d %d",&x,&y);
    printf("%.2lf %.2lf %.2lf\n",1.0*x/100*m,1.0*x/100*o,1.0*x/100*r);
    printf("%.2lf %.2lf %.2lf\n",1.0*y/m*100,1.0*y/o*100,1.0*y/r*100);
    return o;


}
