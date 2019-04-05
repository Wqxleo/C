#include <stdio.h>
int main()
{
    int n,m;
    int sum1,sum2,sum;
    sum1 = sum2 = 0;
    char c;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        sum1++;
    }
    scanf("%c",&c);
    scanf("%c",&c);
    while(1)
    {
        scanf("%d",&m);
        if(m == 0)
            break;
       sum2++;
    }
    if(c == '+')
        sum = sum1 + sum2;
    else if(c == '-')
        sum = sum1 - sum2;
    printf("%d",sum);
    return 0;
}
