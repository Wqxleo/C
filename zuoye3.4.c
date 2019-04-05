#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("  a   : %d\n",a);
    printf("--a   : %d\n",--a);
    a = a + 1;
    printf("  a-- : %d\n",a--);
    a = a + 1;
    printf("  a++ : %d\n",a++);
    a = a -1;
    printf("++a   : %d\n",++a);
    return 0;
}
