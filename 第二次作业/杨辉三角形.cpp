#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i = 0;i < N;i++)
	{
		int n, a[100][100];
		cin >> n;
		for(int i = 1; i <= n; i++)
	 	 {
	  		a[i][0] = 1;
	  		a[i][i] =1;
	  		for(int j = 1; j <= i; j++)
	  		{
	  			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	  		}
	 	 }
		  for(int i = 0;i <= n;i++)
	 	 {
	  		for(int j = 0;j < i;j++)
			  {
			  	cout << a[i][j] <<" "; 
			  } 
			  cout << endl;
	 	 }
	}
	
}
