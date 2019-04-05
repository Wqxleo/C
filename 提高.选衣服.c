#include <stdio.h>
int main()
{
    int Tem,standard,n;
    int i,j,flag = 0,max,dress;
    scanf("%d%d%d",&Tem,&standard,&n);
    int data[n][3];
    for(i = 0;i < n;i++)
        for(j = 0;j < 3;j++)
        scanf("%d",&data[i][j]);
        max = standard;
    for(i = 0;i < n;i++)
    {
        if(Tem >= data[i][0] && Tem <= data[i][1])
        {
            flag = 1;
            if(max <= data[i][2])
            {
               max = data[i][2];
               dress = i;
               flag = 2;
            }
        }
    }
    if(flag == 0)
        printf("All the dress are inappropriate. Buy new one!");
    if(flag == 1)
        printf("All the dress are ugly. Buy new one!");
    if(flag == 2)
        printf("Choose %d dress.",dress+1);
    return 0;
}
