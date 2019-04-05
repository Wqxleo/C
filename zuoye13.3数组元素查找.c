#include <stdio.h>
#define MAX_SIZE 1000
int getarray(int a[])
{
  int n,i;
  scanf("%d",&n);
  for(i = 0;i < n;i++)
  {
      scanf("%d",&a[i]);
  }
  return n;
}
int find(int a[], int n, int val)
{
    int i,flag = -1;
    for(i = 0;i < n;i++)
    {
        if(a[i] == val)
        {
            flag = i;
            break;
        }
    }
    return flag;
}
int main()
{
    int cases, i;
    int arr[MAX_SIZE], size;
    int val, found = 0;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size  = getarray(arr);
        scanf("%d", &val);
        found = find(arr, size, val);
        if(found == -1)
        {
            printf("NOT FOUND\n");
            continue;
        }
        printf("%d\n", found);
    }
    return 0;
}
