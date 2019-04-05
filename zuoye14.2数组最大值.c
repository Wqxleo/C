#include <stdio.h>
#define MAX_SIZE 1001
int get_array(int a[])
{
    int n,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    return n;
}
int put_array(int a[], int n)
{
    int i;
    printf("%d",a[0]);
    for(i = 1;i < n;i++)
        printf(",%d",a[i]);
    return 0;
}
int max_value(int a[], int n)
{
    int i,max;
    max = a[0];
    for(i = 1; i < n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int max_index(int idx[], int a[], int n)
{
   int i,j;
   i = j = 0;
   for(i = 0;i < n;i++)
   {
       if( a[i] == max_value(a, n))
          {
              idx[j] = i;
              j++;
          }
   }
   return j;
}
int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
