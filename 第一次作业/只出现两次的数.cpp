#include <iostream>
using namespace std;
int main()
{
 int n,i,j;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<(n-1);i++)
 {
  int b=0;
  for(j=(i+1);j<n;j++)
  {
   if(a[i]==a[j])
   {
    b++;
    a[j]=10000;
   }
  }
  if(b==1&&a[i]!=10000)
  {
   cout<<a[i]<<endl;
  }
 }
 return 0;
}
