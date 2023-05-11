#include <iostream>
using namespace std;
#include <Cstring> 
void seek(char *ch1, char * ch2)
{
	int i = 0, flag = 0,sum=0;
	while (ch1[i] != '\0')
	{
		if (ch1[i] == ch2[0])
		{
			for (int j = 0; j < strlen(ch2); j++)
			{
				if(ch1[i + j] == ch2[j])
				{
					flag++;
				}
			}
			if(flag==strlen(ch2))
			{
				sum++;
			}
			flag=0;
		}
		i++;
	}
	cout << sum << endl;
}
int main()
{
	char ch1[890] = "abba";
	char ch2[900] = "ababbba abbabbabbabbaacc";
	seek(ch1, ch2);
}

