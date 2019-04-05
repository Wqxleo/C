#include <stdio.h>
typedef struct
{
    int day;
    int month;
    int year;
}DATE;
int getDate(DATE *p)
{
    scanf("%d%d%d",&(p->year),&(p->month),&(p->day));
    return 0;
}
int putDate(DATE data)
{
   printf("%04d-%02d-%02d",data.year,data.month,data.day);
   return 0;
}
int main()
{
    DATE date;
    getDate(&date);
    putDate(date);
    return 0;
}
