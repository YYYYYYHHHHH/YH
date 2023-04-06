#include <iostream>
using namespace std;

int gongbei(int a, int b)
{
	int res = 1;
	int min;
	if(a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}
	for(int i = min; i >= min; i --)
	{
		if(a%i == 0 && b%i == 0)
		{
			res = i;
			break;
		}
	}
	return res;
}
int main()
{
	int N;
	char x;
	cin>>N;
	cin.get(x);
	char a;
	int i = -1;
	int flag = 0;
	int zhengfu = 1;
	int fenzi = 0;
	int fenmu = 1;
	int fenzi2 = 0;
	int fenmu2 = 0;
	int z;
	for(;;)
	{
		cin.get(a);
		if(a == 10)
		{
			z = fenmu * fenmu2;
			fenzi = fenzi * fenmu2 + zhengfu * fenzi2 * fenmu;
			fenmu = z;
			fenzi2 = 0;
			fenmu2 = 0;
			zhengfu = 1;
			flag = 0;
			break;
		}
		if(a == '-')
		{
			zhengfu = -1;
			continue;
		}
		if(a == '/')
		{
		
			flag = 1;
			continue;
		}
		if(a >= '0' && a <= '9')
		{
			
			if(flag == 0)
			{
				fenzi2 = fenzi2 * 10 + a - 48;
			}
			if(flag == 1)
			{
				fenmu2 = fenmu2 * 10 + a - 48;
			}
			continue;
		}
		if(a == 32)
		{
			z = fenmu * fenmu2;
			fenzi = fenzi * fenmu2 + zhengfu * fenzi2 * fenmu;
			fenmu = z;
			fenzi2 = 0;
			fenmu2 = 0;
			zhengfu = 1;
			flag = 0;
		}
	}
	if(fenzi < 0)
	{
		zhengfu = -1;
		fenzi = 0 - fenzi;
	}
	int k = gongbei(fenzi, fenmu);
	fenzi = fenzi / k;
	fenmu = fenmu / k;
	if(zhengfu == -1)
	{
		cout<<'-';
	}
	cout<<fenzi;
	if(fenmu != 1)
	{
		cout<<'/'<<fenmu;
	}
	cout<<endl;
	return 0;
}
