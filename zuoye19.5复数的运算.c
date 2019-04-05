#include <stdio.h>
struct CPLX
{
    int s;
    int x;
};
void get_cplx(struct CPLX *cx)
{
    scanf("%d%d",&(cx->s),&(cx->x));
}
void put_cplx(struct CPLX cx)
{
    printf("%d %d\n",cx.s,cx.x);
}
struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX cx;
    cx.s = cx1.s + cx2.s;
    cx.x = cx1.x + cx2.x;
    return cx;
}
struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX cx;
    cx.s = cx1.s - cx2.s;
    cx.x = cx1.x - cx2.x;
    return cx;
}
int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}
