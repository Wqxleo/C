#include <stdio.h>
int digit_sum(int num)
{
    int sum1,sum2;
    sum1 = num;
    sum2 = 0;
    while(sum1 >= 10)
    {
        while(num > 0)
        {
            sum2 = sum2 + num%10;
            num = num/10;
        }
        sum1 = sum2;
        num = sum2;
        sum2 = 0;
    }
    return sum1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
