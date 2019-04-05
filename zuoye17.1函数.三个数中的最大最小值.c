#include <stdio.h>
void get_num(int *a,int *b,int *c)
{
    int i,j,k;
   scanf("%d%d%d",&i,&j,&k);
   *a = i;
   *b = j;
   *c = k;
}
void max_min(int *max, int *min, int a,int b, int c)
{
    int data[3] = {a,b,c};
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
    *max = data[2];
}


int main()
{
    int cases, i;
    int mmax, mmin, a, b, c;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        get_num(&a, &b, &c);
//        printf("%d %d %d\n",a,b,c);
        max_min(&mmax, &mmin, a, b, c);
        printf("case %d : %d, %d\n", i, mmax, mmin);
    }
}
