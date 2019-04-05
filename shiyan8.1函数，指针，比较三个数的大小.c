#include <stdio.h>
int compare(int *min, int *mid, int *max)
{
   int data[3] = {*min,*mid,*max};
   int i,j,tep;
   for(i = 1;i < 3;i++)
    for(j = 0;j < 3-i;j++)
   {
       if(data[j] > data[j+1])
       {
           tep = data[j];
           data[j] = data[j+1];
           data[j+1] = tep;
       }
   }
   *min = data[0];
   *mid = data[1];
   *max = data[2];
   return 0;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
