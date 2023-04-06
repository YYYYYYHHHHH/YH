#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char a[10000];
 int i,b,c=0,d=0,j,k,e=0,m;
 cin>>a;
 b=strlen(a);
 for(i=0;i<b;i++)
 {
  if(a[i]>='a'||a[i]<='z'||a[i]>='A'||a[i]<='Z'||a[i]>='0'||a[i]<='9'||a[i]=='_'||a[i]=='-'||a[i]=='@'||a[i]=='.')
  {
   c++;
  }
 }
 if(c==b)
   {
    for(j=0;j<b;j++)
    {
     if(a[j]=='@'&&j!=0&&j!=(b-1))
     {
      m=j;
         d++;
     }
    }
    if(d==1)
    {
     for(k=0;k<b;k++)
     {
      if(a[k]=='.'&&k!=(m+1)&&k!=(b-1))
         e++;
     }
    }
   }
 if(e==1)
 {
  cout<<"yes"<<endl;
 }
 else
 {
  cout<<"no"<<endl;
 }
 return 0;
 } 
