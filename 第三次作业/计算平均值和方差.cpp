#include <iostream>
using namespace std;
double ave(double a[],int);
double variance(double a[],int);
int main()
{
	
}
double ave(double a[],int n)
{
	int sum = 0;
	for(int i = 0;i < n;i++)
	{
		sum += a[i];
	}
	return sum / n;
}
double variance(double a[],int n)
{
	double sum = 0;
	double average = ave(a,n);
	for(int i = 0;i < n;i++)
	{
		sum = (a[i] - average) * (a[i] - average);
	}
	return sum / n;
}
