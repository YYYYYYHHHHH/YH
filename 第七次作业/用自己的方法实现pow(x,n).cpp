#include <iostream>
using namespace std; 
double Pow(double x, int n) 
{    
	if(n == 0) return 1.0;    
	if(n == 1) return x;    
	if(n == -1) return 1 / x;    
	double half = Pow(x, n / 2);    
	double rest = Pow(x, n % 2);    
	return half * half * rest;
}

