#include <stdio.h>
int main()
{
    int data1[1001],data2[1001];
    int tep,i=0,j,count1=0,count2=0,count = 0;
    double sim;
    data1[0] = data2[0] = 0;
    while(1)
    {
        scanf("%d",&tep);
        if(tep == 0)
        {
             break;
        }

        else
            {
                data1[i] = tep;
                i++;
            }
            count1 = i;
    }
    i = 0;
    while(1)
    {
        scanf("%d",&tep);
        if(tep == 0)
        {
            break;
        }

        else
            {
                data2[i] = tep;
                i++;
            }
            count2 = i;
    }
    for(i = 0;i < count1;i++)
        for(j = 0;j < count2;j++)
    {
        if(data2[j] == data1[i])
           count++;
    }
    if(data1[0] == 0 || data2[0] == 0)
        count1 = 1;
    sim = 100.0*count/(count1 + count2 - count);
    if(count/(count1 + count2 - count) == 1)
        printf("1");

    else
        printf("%.2lf%%",sim);
    return 0;
}
