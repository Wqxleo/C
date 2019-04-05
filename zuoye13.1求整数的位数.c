#include <stdio.h>
int digits(int n)
{
    if(n < 0)
        n = -n;
    int a = 1;
    while(n/10>0)
    {
        a++;
        n = n/10;
    }
    return a;
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
