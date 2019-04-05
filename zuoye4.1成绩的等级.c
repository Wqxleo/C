#include <stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a) != EOF)
    {
        if(a>=90&&a<=100)
            b = 1;
        else if(a>=80&&a<=89)
            b = 2;
        else if(a>=70&&a<=79)
            b = 3;
        else if(a>=60&&a<=69)
            b = 4;
        else if(a>=0&&a<=59)
            b = 5;
        else
            b = 6;
            switch(b)
            {
               case 1:
            printf("Excellent\n");
            break;
        case 2:
            printf("Good\n");
            break;
        case 3:
            printf("Average\n");
            break;
        case 4:
            printf("Pass\n");
            break;
        case 5:
            printf("Failing\n");
            break;
        default :
            printf("Error\n");
            break;
            }

    }
}
