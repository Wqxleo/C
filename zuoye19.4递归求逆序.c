#include <stdio.h>
int recursive()
{
//    char ch;
//    ch = getchar();
//    if(ch == EOF)
//        return 0;
//    recursive();
//    putchar(ch);
      char ch;
      ch = getchar();
      if(ch == EOF)
        return 0;

       putchar(ch);
       recursive();
}
int main()
{
    recursive();
}
