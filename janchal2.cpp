#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
			int n;
			cin>>n;
			long long int a[n];
			int rel[n][n];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n-1;i++){
				long long int a,b;
				cin>>a>>b;
				rel[a][b]=1;
			}
			 int index=0;
				for(int i=0;i<n;i++){
						for(int j=0;j<n;j++){
			if(rel[i][j]!=1&&i!=j){
			if(	a[index]<a[j])
			index=j;
			}
		}
	cout<<index<<" ";
	}
			
	cout<<endl;		
		
		
		
		
		
		
		
	}
}
