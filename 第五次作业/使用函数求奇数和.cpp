#include <iostream>
using namespace std; 
int even(int m);
int main()
{
	int a[100], n, i;
	int sum = 0;
	cin >> n;
	for(i = 0;n <= 0;i++)
	{
		a[i] = n;
		if (even(n) == 0)
		{
			sum += n;
		}
		cin >> n;
	} 
	cout << sum;
} 

int even(int m)
{
	if(m % 2 == 0)
	{
		even(m)  == 1;
	}
	else
	{
		even(m)  == 0;
	}
}
