#include<iostream>
#include<cstring>
#include<map>
using namespace std;

string Reduce(string p){ 
	string result;
	int j=0; 
	for(int i=0;i<p.length();i++)
	{
		if(p[i]=='A'||p[i]=='B'||p[i]=='C'){
			j++;
			result+='2';
		}
		else if(p[i]=='D'||p[i]=='E'||p[i]=='F'){
			j++;
			result+='3';
		}
		else if(p[i]=='G'||p[i]=='H'||p[i]=='I'){
			j++;
			result+='4';
		}
		else if(p[i]=='J'||p[i]=='K'||p[i]=='L'){
			j++;
			result+='5';
		}
		else if(p[i]=='M'||p[i]=='N'||p[i]=='O'){
			j++;
			result+='6';
		}
		else if(p[i]=='P'||p[i]=='R'||p[i]=='S'){
			j++;
			result+='7';
		}
		else if(p[i]=='T'||p[i]=='U'||p[i]=='V'){
			j++;
			result+='8';
		}
		else if(p[i]=='W'||p[i]=='X'||p[i]=='Y'){
			j++;
			result+='9';
		}
		else if(p[i]>='0'&&p[i]<='9'){
			j++;
			result+=p[i];
		}
		else continue;
		if(j==3)
		result+='-';
	}
	return result;
}

int main()
{
	int n;
	cin>>n;
	map <string,int> maplist;
	while(n--)
	{
		string s;
		cin>>s;
		s=Reduce(s);
		if(maplist.count(s))
		{
			maplist[s]++;
		}
		else 
		maplist[s]=1;
	}
	int flag=1; 
	map<string,int>::iterator it=maplist.begin(); 
	for(;it!=maplist.end();++it)
	{
		if(it->second<2)
		continue;
		else{
			flag=0;
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
	if(flag)cout<<"No duplicates."<<endl;
	return 0;
}

