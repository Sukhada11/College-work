#include<iostream>
#include<math.h>
using namespace std;
int min(int x,int y){
	if(x<y)
	return x;
	else
	return y;
}
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>a[i][j];
		}
		}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
		int w[n][n];
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			w[i][j]=0;
		}}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (a[i][j]!=0)
			w[i][j]=a[i][j];
			else
			w[i][j]=20000;
		}
	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			w[i][j]=min(w[i][j],w[i][k]+w[k][j]);
	}
		
		
		
	}}
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<w[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
}
