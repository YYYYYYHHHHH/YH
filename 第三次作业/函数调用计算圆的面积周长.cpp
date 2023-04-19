#include <iostream>
//#include <cmath>
using namespace std;
#define PI 3.14/
double zhijin(double r)
{
	cin >> r;
	return 2 * r;
}
double length(double r)
{
	return 2 * PI * r;
}
double area(double r)
{
	return PI * r * r;
}
int main()
{
	double d = zhijin(10.0);
	double c = length(10.0);
	double s = area(10.0);
	cout << "直径=" << d << endl;
	cout << "周长=" << c << endl; 
	cout << "面积=" << s << endl;
	return 0; 
}
