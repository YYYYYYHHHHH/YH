#include <iostream>
using namespace std;
int main()
{
	int num;
	int b = 1;
	cin >> num;
	if(num == 0)
	{
		cout << num;
	}
	while(1)
	{
		if(num >= b)
		{
			b *= 8;
			continue; 
		}
		b /= 8;
		if(b == 0)
		break;
		cout << num / b;
		if(num >= b)
		num %= b;
	}
}
