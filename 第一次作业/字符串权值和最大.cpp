#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char a[10000];
 int i,t,j,n,m;
 int b[26]={0},c[26]={0};
 cin>>a;
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  if(a[i]=='a')
    b[0]++;
  else if(a[i]=='b')
    b[1]++;
  else if(a[i]=='c')
    b[2]++;
  else if(a[i]=='d')
    b[3]++;
  else if(a[i]=='e')
    b[4]++;
  else if(a[i]=='f')
    b[5]++;
  else if(a[i]=='g')
    b[6]++;
  else if(a[i]=='h')
    b[7]++;
  else if(a[i]=='i')
    b[8]++;
  else if(a[i]=='j')
    b[9]++;
  else if(a[i]=='k')
    b[10]++;
  else if(a[i]=='l')
    b[11]++;
  else if(a[i]=='m')
    b[12]++;
  else if(a[i]=='n')
    b[13]++;
  else if(a[i]=='o')
    b[14]++;
  else if(a[i]=='p')
    b[15]++;
  else if(a[i]=='q')
    b[16]++;
  else if(a[i]=='r')
    b[17]++;
  else if(a[i]=='s')
    b[18]++;
  else if(a[i]=='t')
    b[19]++;
  else if(a[i]=='u')
    b[20]++;
  else if(a[i]=='v')
    b[21]++;
  else if(a[i]=='w')
    b[22]++;
  else if(a[i]=='x')
    b[23]++;
  else if(a[i]=='y')
    b[24]++;
  else if(a[i]=='z')
    b[25]++;
 }
 for(i=0;i<26;i++)
 {
  for(j=25;j>i;j--)
  {
   if(b[i]>b[j])
   {
    t=b[j];
    b[j]=b[i];
    b[i]=t;
   }
  }
 }
 for(i=25;i>=0;i--)
 {
  c[i]=b[i]*(i+1);
 }
 m=c[0]+c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9]+c[10]+c[11]+c[12]+c[13]+c[14]+c[15]+c[16]+c[17]+c[19]+c[20]+c[21]+c[22]+c[23]+c[24]+c[25];
 cout<<m<<endl;
 return 0;
}
