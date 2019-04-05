#include <stdio.h>
#define MAX_SIZE 1001
int get_array(int a[])
{
    int n,i;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    return n;

}
int put_array(int a[], int n)
{
    int i;
    if(n > 0)
    {
        printf("%d",a[0]);
        for(i = 1; i < n; i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    else
        printf("\n");
    return 0;
}
int reverse_array(int a[], int n)
{
    int i,tap;
    for(i = 0; i < n/2; i++)
    {
        tap = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tap;
    }
    return 0;
}
int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}

