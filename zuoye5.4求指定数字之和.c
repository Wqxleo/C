#include <stdio.h>
int main()
{
    int m,sum,i,j = 0;
    int a,b,c;

    while(scanf("%d",&m) != EOF)
    {
        j = j + 1;
        sum = 0;
        for(i = 100;i <= 999;i++)
        {
            a = i/100;
            b= (i%100)/10;
            c = i%10;
            if(i%m == 0&& a != b && b != c && c != a)
                sum = sum + i;
        }
        printf("case %d:%d\n",j,sum);
    }
    return 0;
}
