#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    int i,len,a,e,I,o,u,count,k=1;
    while(gets(str))
    {
        if(str[0] == EOF)
            break;
        else
        {
            a=e=I=o=u=count=0;
            len = strlen(str);
            for(i = 0; i < len; i++)
            {
                if(str[i]=='a'||str[i]=='A')
                    a++;
                if(str[i]=='e'||str[i]=='E')
                    e++;
                if(str[i]=='i'||str[i]=='I')
                    I++;
                if(str[i]=='o'||str[i]=='O')
                    o++;
                if(str[i]=='u'||str[i]=='U')
                    u++;
                if(str[i]>='A'&&str[i]<='z')
                    count++;

            }
            printf("case %d :\n",k);
            k++;
            printf("A : %.4lf%%\n",100.0000*a/count);
            printf("E : %.4lf%%\n",100.0000*e/count);
            printf("I : %.4lf%%\n",100.0000*I/count);
            printf("O : %.4lf%%\n",100.0000*o/count);
            printf("U : %.4lf%%\n",100.0000*u/count);
        }

    }
    return 0;

}
