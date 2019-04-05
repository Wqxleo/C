#include <stdio.h>
int main()
{
    double d,area,volume;
    double M_PI = 3.14159265358979323846;
    scanf("%lf",&d);
    area = 4.0*M_PI*(d/2.0)*(d/2.0);
    volume = (M_PI)*(d/2.0)*(d/2.0)*(d/2.0)*4.0/3.0;
    printf("area = %.6lf\n",area);
    printf("volume = %.6lf",volume);
    return 0;
}
