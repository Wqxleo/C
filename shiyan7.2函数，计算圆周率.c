#include <stdio.h>
double pi(int n)
{
    double i;
   double result = 1;
   for(i = 1;i <= n;i++)
   {
       result *= 4*i*i/((2*i-1)*(2*i+1));
   }
   return 2*result;
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%.7lf\n", pi(n));
    }
    return 0;
}
