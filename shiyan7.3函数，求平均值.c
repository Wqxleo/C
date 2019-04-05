#include <stdio.h>
int getArray(int data[])
{
    int tap,count;
    int i = 0;
   while(1)
   {
       scanf("%d",&tap);
       if(tap == 0)
       {
           if(i == 0)
           {
               data[0] = 0;
               i = 1;
           }
         break;
       }
       else
        data[i] = tap;
       i++;
   }
   count = i;
   return count;
}
 double getAvg(int data[], int n)
 {
     int i,sum = 0;
     double avg;
     for(i = 0;i < n;i++)
     {
         sum += data[i];
     }
     avg = sum/(1.0*n);
     return avg;
 }
int main()
{
    int data[1000], n, m, i;
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        n = getArray(data);
        printf("Case %d : %.2lf\n", i + 1, getAvg(data, n));
    }
    return 0;
}
