#include <stdio.h>
int main()
{
    int score,i,max;
    int mark[101] = {0};
    while(scanf("%d",&score) != EOF)
    {
        if(score >=0 && score <= 100)
            mark[score]++;
    }
    max = mark[0];
    for(i = 1; i <= 100; i++)
    {
        if(mark[i] > max)
            max = mark[i];
    }
    for(i = 0; i <= 100; i++)
    {
        if(mark[i] == max)
            printf("%d\n",i);
    }
    return 0;
}
