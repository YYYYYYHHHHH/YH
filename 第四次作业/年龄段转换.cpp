#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a>=1&&a<=10)
	{
		cout<<"Children"<<endl;
	}
	else if(a>10&&a<=20)
	{
		cout<<"Teenagers"<<endl;
	}
	else if(a>20&&a<=40)
	{
		cout<<"Youth"<<endl;
	}
	else if(a>40&&a<=50)
	{
		cout<<"middle-aged"<<endl;
	}
	else if(a>50&&a<=80)
	{
		cout<<"Elderly"<<endl;
	}
	else if(a>80&&a<=100)
	{
		cout<<"Old man"<<endl;
	}
	return 0;
}
