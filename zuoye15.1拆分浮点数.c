#include <stdio.h>
int main()
{
    double x;
    int n;
    scanf("%lf",&x);
    if(x < 0)
    {
        printf("- ");
        x = -x;
    }
    else
        printf("+ ");
        n = x;
    printf("%d ",n);
    printf("%g",x-n);
    //%g用来输出实数，它根据数值的大小，自动选f格式或e格式（选择输出时占宽度较小的一种），且不输出无意义的0。
    return 0;
}
