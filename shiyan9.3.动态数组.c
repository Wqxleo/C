#include <stdio.h>
#include <malloc.h>
double* allocate(int n)
{
   double *p;
   p = (double *)malloc(n*sizeof(double));
   return p;
}
void input(double* p, int n)
{
   int i;
   for(i = 0;i < n;i++)
        scanf("%lf",&p[i]);
}
void output(double* p, int n)
{
    int start,end,i;
    scanf("%d%d",&start,&end);
    if(start > n || end < 1)
        printf("no output");
    else if(start <= 1 && end >= n)
    {
        printf("%g",p[0]);
       for(i = 1;i < n;i++)
        {
           printf("\n%glf",p[i]);
        }
    }
    else if(start >= 1 && end <= n)
    {
        printf("%g",p[start-1]);
        for(i = start;i < end;i++)
        printf("\n%g",p[i]);
    }
    else if(start < 1 && end <= n && end >= 1)
    {
        printf("%g",p[0]);
         for(i = 1;i < end;i++)
        printf("\n%g",p[i]);
    }
    else
    {
        printf("%g",p[start-1]);
      for(i = start;i < n;i++)
        printf("\n%g",p[i]);
    }
}
void release(double* p)
{
    free(p);
}
int main()
{
    int len;
    double *array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
