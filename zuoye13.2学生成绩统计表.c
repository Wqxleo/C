#include <stdio.h>
double getarray(char str[], double data[], int n)
{
    int i;
    for(i = 0;i < 10;i++)
    {
        scanf("%c",&str[i]);
    }
    for(i = 0;i < n-1;i++)
    {
        scanf("%d",&data[i]);
    }
    return 0;
}
double output(char str[], double data[], int n, double sum)
{
    int i;
    puts(str);
    for(i = 0;i < n-1;i++)
    {
        printf(" %.1lf",data[i]);
    }
    printf(" %.1lf",sum);
    return 0;
}
double getsum(double data[], int n)
{
   double sum1 = 0.0;
   int i;
   for(i = 0;i < n-1;i++)
   {
       sum1 += data[i];
   }
   return sum1;
}
int main()
{
    int m,n,i,j;
    char str[10];
    scanf("%d%d",&m,&n);
    double data[n];
    double sum[m];
    for(i = 1;i <= m;i++)
    {
       getarray(str, data, n);
       output(str, data, n, getsum(data,n));
       for(j = 0;j < m;j++)
       {
           sum[j] = 0;
       }
       for(j = 0;j < n;j++)
       {
           sum[j] += data[j];
       }
       if(i == m)
       {
          printf("average");
          for(j = 0;j < n;j++)
          {
              printf(" %.1lf",sum[j]/n);
          }
       }
    }
    return 0;
}
