#include <stdio.h>
int main()
{
    int x,y;
    scanf_s("%d",&x);
	scanf_s("%d",&y);
    printf("x + y : %d\n",x+y);
    printf("x - y : %d\n",x-y);
    printf("x * y : %d\n",x*y);
    printf("x / y quotient: %d, remainder: %d\n",x/y,x%y);
    printf("x ^ 2 : %d\n",x*x);
    printf("y ^ 3 : %d",y*y*y);


}
