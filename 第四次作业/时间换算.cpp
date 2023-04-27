#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d:%d:%d:",&h,&m,&s);
    int n;
    scanf("%d",&n);
    int time;
    time=3600*h+60*m+s+n;
    if(time>=86400)
    {
        time=time-86400;
    }
    if(time<86400)
    {
        time=time;
    }
    int hour,minute,second;
    hour=time/3600;
    minute=(time-(3600*hour))/60;
    second=(time-3600*hour-60*minute);
    printf("%02d:%02d:%02d",hour,minute,second);
    return 0;
}

