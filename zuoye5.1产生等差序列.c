#include <stdio.h>
int main()
{
    int star,step,end,i;
    scanf("start = %d, step = %d, end = %d",&star,&step,&end);
    if(step > 0)
    {
       printf("%d",star);
    for(i = star+ step;i <= end;i = i + step)
        printf(" %d",i);
    }
    else
    {
        printf("%d",star);
        for(i = star+ step;i >= end;i = i + step)
        printf(" %d",i);
    }

        return 0;
}
