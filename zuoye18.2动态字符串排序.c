#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
    int n,i,j;
    char **p;
    char str[100001];
    char *q;
    scanf("%d",&n);
    getchar();
    p = (char**) malloc(n * sizeof(char*));
    for(i = 0;i < n;i++)
    {
        gets(str);
        p[i] = (char*) malloc((strlen(str) + 1) * sizeof(char));
        strcpy(p[i],str);
    }
    for(i = 1;i < n;i++)
        for(j = 0;j < n - i;j++)
    {
       if(strcmp(p[j],p[j+1]) > 0)
       {
          q = p[j];
          p[j] = p[j+1];
          p[j+1] = q;
       }
    }
    for(i = 0;i < n;i++)
        puts(p[i]);
    return 0;
}
