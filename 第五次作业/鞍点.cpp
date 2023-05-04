#include<iostream>
using namespace std;
 
int a[11][11];
int row[11];
int column[11];
int main() {
	int m,n,x;
	int max,min;
	int flag=0;
	int pointx,pointy,point;
	cin>>m>>n;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=m; i++) {
		max;
		for(int j=1; j<=n; j++) {			
			if(a[i][j]>max) {
				max=a[i][j];
				row[i]=max;
			}
		}
	}
	for(int j=1; j<=n; j++) {
		min=9999;
		for(int i=1; i<=m; i++) {
			if(a[i][j]<min) {
				min=a[i][j];
				column[j]=min;
			}
		}	
	}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			if(row[i]==column[j]) {
				pointx=i;
				pointy=j;
				point=row[i];
				flag++;
			}
		}
	}
	
	if(flag==0) {
		cout<<"None";
	} else {
		
		cout<<pointx<<pointy;
	}
	return 0;
}

