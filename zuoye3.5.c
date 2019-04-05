#include <stdio.h>
int main()
{
    int x,y;
    int a,b,c,d;
    scanf("%d",&x);
    y = 100 - x;
    a = y/20;
    b = (y%20)/10;
    c = ((y%20)%10)/5;
    d = (((y%20)%10)/1;
    printf("$20 bills: %d\n",a);
    printf("$10 bills: %d\n",b);
    printf(" $5 bills: %d\n",c);
    printf(" $1 bills: %d\n",d);
    return 0;
}
