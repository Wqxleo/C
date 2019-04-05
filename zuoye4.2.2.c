#include <stdio.h>
int main()
{
    char a, b;
    int high, low;
    double step, x, y;
    scanf("%c->%c", &a, &b);
    scanf("%d", &low);
    scanf("%d", &high);
    scanf("%lf", &step);
    if(a == 'F' && b == 'C')
    {
        printf("   F  ->    C\n");
        x = low;
        while(x <= high + 0.01)
        {
            y = (x - 32)*5/9;
            printf("%5.1lf ->", x);
            printf("%6.1lf\n", y);
            x += step;
        }
    }
    else if(a == 'C' && b == 'F')
    {
        printf("   C  ->    F\n");
        x = low;
        while(x <= high + 0.01)
        {
            y = x*9/5 + 32;
            printf("%5.1lf ->", x);
            printf("%6.1lf\n", y);
            x += step;
        }
    }
    return 0;
 }
