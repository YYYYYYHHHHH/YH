#include <iostream>
using namespace std;
int gcd(int m,int n);
int lcm(int x,int y);
int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a,b) << "\n" << lcm(a,b);
} 

int gcd(int m,int n)
{
	int i;
	if(m < n)
	{
		i = m;
		m = n;
		n = i;
	}
	while(n != 0)
	{
		i = m % n;
		m = n;
		n = i;
	}
	return i;
}

int lcm(int x,int y)
{
	int z;
	z = x * y / gcd(x,y);
	return z;
}
