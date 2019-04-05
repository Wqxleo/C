#include <stdio.h>
typedef struct
{
    int day;
    int month;
    int year;
} DATE;
int getDate(DATE *p)
{
    scanf("%d%d%d",&(p->year),&(p->month),&(p->day));
    return 0;
}
int putDate(DATE data)
{
    printf("%04d-%02d-%02d\n",data.year,data.month,data.day);
    return 0;
}
DATE getMax(DATE data1, DATE data2)
{
    if(data1.year > data2.year)
        return data1;
    else if(data1.year == data2.year)
    {
        if(data1.month > data2.month)
            return data1;
        else if(data1.month == data2.month)
        {
            if(data1.day > data2.day)
                return data1;
            else
                return data2;
        }
        else
            return data2;
    }
    else
        return data2;
}
int main()
{
    DATE date1, date2, max;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        getDate(&date1);
        getDate(&date2);
        max = getMax(date1, date2);
        putDate(max);
    }
    return 0;
}
