#include <stdio.h>
#include <stdlib.h>
int main()
{

    unsigned long long n,sum=0;
    scanf("%llu",&n);
    sum=n+n*(n-1)/2;
    printf("%llu",sum);
    return 0;
}
