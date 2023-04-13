#include<iostream>
using namespace std;
 
void PrintfDay(int y,int m, int d); //声明PrintfDay函数
 
void CaculateWeekDay(int y, int m, int d)
{
    if(m==1||m==2) //把一月和二月换算成上一年的十三月和是四月
    {
        m+=12;
        y--;
    }
    int Week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(Week)
    {
        case 0: PrintfDay(y,m,d); cout << "Monday" << endl; break;
        case 1: PrintfDay(y,m,d); cout << "Tuesday" << endl; break;
        case 2: PrintfDay(y,m,d); cout << "Wesdnesday" << endl; break;
        case 3: PrintfDay(y,m,d); cout << "Thursday" << endl; break;
        case 4: PrintfDay(y,m,d); cout << "Friday" << endl; break;
        case 5: PrintfDay(y,m,d); cout << "Saturday" << endl; break;
        case 6: PrintfDay(y,m,d); cout << "Sunday" << endl; break;
    }
}
void PrintfDay(int y,int m,int d)
{
    cout << y << "-" << m << "-" << d << "-";
}
int main()
{
    int year,month,day;
    cin >> year >> month >> day ;
    CaculateWeekDay(year,month,day);
    return 0;
}

