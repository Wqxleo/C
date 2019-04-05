#include <stdio.h>
#define MAX_SIZE 100
int get_array(int a[])
{
    int i = 0;
    while(scanf("%d",&a[i]) != EOF)
    {
        i++;
    }
    return i;
}
int put_array(int a[], int n)
{
    int i;
    printf("%d",a[0]);
    for(i = 1; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    return 0;
}
int sort_array(int a[], int n)
{
    int i,j,temp;
    for(i = 1; i < n; i++)
        for(j = 0; j < n-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    return 0;
}
int main()
{
    int array[MAX_SIZE], size;

    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);

    return 0;
}

