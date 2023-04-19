/*求大于m且紧靠m的k个回文数*/ 
#include <iostream>
using namespace std;
int main()
{
	int N;
	int flag = 0;
	cin >> N;
	for(int i = 0;i < N;i++)
	{
		int m,k;
		cin >> m >> k;
		int j;
		for(j = m + 1;flag < k;j++)
		{
			int  x = j;
			int n = 0;
			while(x > 0)
			{
				n = n * 10 + x % 10;
				x /= 10;
			}
			 if(n == j)
			 {
			 	cout << n << endl;
			 	flag ++;
			 }
			 else
			 continue;
		
		}
	}
	return 0;
} 
