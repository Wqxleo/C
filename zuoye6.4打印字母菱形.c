#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i = 0;i < (n+1)/2;i++)
    {
        for(j = 0;j < (n-1)/2-i;j++)
           printf(" ");
        for(k = 0;k < 2*i+1;k++)
            printf("%c",'A'+k+i);
        printf("\n");
    }
//    for(i = 0;i < n/2;i++)
//    {
//        for(j = 0;j < i+1;j++)
//            printf(" ");
//        for(k = 0;k < n - 2*(i + 1);k++)
//            printf("%c",'A'+(n-1)/2 - i + k -1);
//        printf("\n");
//    }
      for(i = n/2;i >0 ;i--)
      {
          for(j = n/2 - i + 1;j > 0;j--)
            printf(" ");
          for(k = 0;k < 2*i-1;k++)
            printf("%c",'A' + i -1 + k);
          printf("\n");
      }
    return 0;
}
