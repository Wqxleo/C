#include <stdio.h>
int main()
{
    int a,b,c,d;
    int x,y,z;
    scanf("%d %d %d %d\n",&a,&b,&c,&d);
    scanf("%d %d %d",&x,&y,&z);
    if(x >= a && y >= b && z >= c && x + y + z >= d)
        printf("congratulations");
        else
            printf("sorry");
        return 0;
}
