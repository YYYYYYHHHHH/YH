#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	int *p = NULL;
	cin >> n; 
	for(i = 0;i < n;i++)
	{
		cin >> p[i];
	}
	for(i = 0;i < n - 1;i++)
	{
		for(j = 0;j < n;j++)
		{
			if(p[j] > p[j + 1])
			{
				int t;
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
			if(j == n)
			{
				break;
			}
		}
	}
	for(i = 0;i < n;i++)
		{
			cout << p[i];
		}
}
