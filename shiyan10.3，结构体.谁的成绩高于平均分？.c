#include <stdio.h>
#include <malloc.h>
typedef struct
{
    int score;
    char name[81];
}STUDENT;
void getStudent(STUDENT *s, int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        gets(s[i].name);
        scanf("%d",&(s[i].score));
        getchar();
    }
}
void putStudent(STUDENT stu)
{

    printf("%s %d\n",stu.name,stu.score);
}
double getAverage(STUDENT *stus, int n)
{
    int sum=0,i;
    double avg;
    for(i = 0;i < n;i++)
    {
       sum += stus[i].score;
    }
    avg = sum/n;
    return avg;
}
int main()
{
    STUDENT *students;
    double avg;
    int n, i;
    scanf("%d", &n);
    getchar();
    students = (STUDENT*)malloc(sizeof(STUDENT) * n);
    getStudent(students, n);
    avg = getAverage(students, n);
    for (i = 0; i < n; i++)
    {
        if (students[i].score > avg)
            putStudent(students[i]);
    }
    free(students);
    return 0;
}
