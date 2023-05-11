#include <iostream>
using namespace std;
int IsCancel(int a[], int N, int K);
int main()
{
	int x, y; 
	cin >> x >> y >> "\n";
	int a[x];
	int i = 0;
	for(i = 0;i < x;i++)
	{
		cin >> a[i];
	}
	if(IsCancel(a[x], x, y) < y)
	{
		cout << "No";
	} 
	else
	{
		cout << "Yes";
	}
}
int IsCancel(int a[], int N, int K)
{
	int sum = 0;
	for(i = 0;i < N; i++)
	{
		if(a[i] <= 0)
		{
			sum += 1;
		}
		else
		{
			sum = sum;
		}
	}
	return sum;
}
