#include <stdio.h>
void move(int n,int x,int y,int z)
{
    if(n == 1)
    {
        printf("   plate 1 : from %d to %d\n",x,z);
    }
    else
    {
        move(n-1,x,z,y);
        printf("   plate %d : from %d to %d\n",n,x,z);
        move(n-1,y,x,z);
    }
}
int main()
{
    int n,z1,z2,z3,i = 1;
    while(scanf("%d%d%d%d",&n,&z1,&z2,&z3) != EOF)
    {
        printf("case %d :\n",i);
        move(n,z1,z2,z3);
        printf("\n");
        i++;
    }
    return 0;
}
