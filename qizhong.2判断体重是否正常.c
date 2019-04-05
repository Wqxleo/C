#include <stdio.h>
int main()
{
    double w,h,B;
    while(scanf("%lf %lf",&h,&w) != EOF)
    {
        B = w/((h/100.0)*(h/100.0));
        if(B < 19)
            printf("%.2lf lower\n",B);
        else if(B>=19&&B<25)
            printf("%.2lf health\n",B);
        else if(B>=25&&B<30)
            printf("%.2lf heavy\n",B);
        else if(B>=30&&B<40)
            printf("%.2lf super heavy\n",B);
        else
            printf("%.2lf extra heavy\n",B);
    }
    return 0;
}
