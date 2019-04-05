#include <stdio.h>
int get_int_sum(int *a, int *b)
{
    int m,n,*i,*j;
    scanf("%d%d",&m,&n);
//    i = &m;
//    j = &n;
//    *a = m;
//    *b = n;
      a = &m;
      b = &n;
//???????????????????????????????????????????????
      printf("%d  %d\n",*a,*b);
    return (m + n);
}
int main()
{
    int n, a, b, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d = ", get_int_sum(&a, &b));
        printf("%d + %d\n", a, b);

    }
    return 0;
}
