//#include <stdio.h>
//int main()
//{
//    char c,f;
//    scanf("%c->%c",&c,&f);
//    double a,b;
//    scanf("%lf%lf",&a,&b);
//    float step;
//    scanf("%f",&step);
//    if(c=='C'&& f == 'F')
//    {
//        printf("   C  ->    F\n");
//        do
//        {
//           printf("%5.1f -> %5.1f\n",a,9.0/5.0*a+32.0);
//           a = a + step;
//        }while(a <= b+0.01);
//    }
//    else
//    {
//        printf("   F  ->     C\n");
//        do
//        {
//            printf("%5.1f ->  %5.1f\n",a,5.0/9.0*(a-32.0));
//            a = a + step;
//        }while(a <= b+0.01);
//    }
//    return 0;
//
//
//}
#include <stdio.h>
int main()
{

    char a,b;
    double step,low,high,c,i;
    scanf ("%c->%c",&a,&b);
    scanf ("%lf",&low);
    scanf ("%lf",&high);
    scanf ("%lf",&step);
    if (a=='C'&&b=='F')
    {

        printf ("   C  ->    F\n");
        for (i=low;i<=high+0.01;i=i+step)
        {
            c = i*9/5+32;
            printf ("%5.1lf -> %5.1lf\n",i,c);
        }
    }
    else
    {

        printf ("   F  ->    C\n");
        for (i=low;i<=high+0.01;i=i+step)
        {
            c=(i-32)*5/9;
            printf ("%5.1lf -> %5.1lf\n",i,c);
        }
    }
}
