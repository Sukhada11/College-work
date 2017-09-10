#include<iostream>
#include<math.h>
using namespace std;
void cancel(int a[],int n,int k);
int main(){
	int n=100;
	int a[n+1];
	for(int i=1;i<=n;i++){
		a[i]=i;
	
	}
	int t=sqrt(n);
	for(int i=2;i<t;i++){
		cancel(a,i,n);
}
	
		for(int i=2;i<=n;i++){
	if(a[i]!=1)	
			cout<<" "<<a[i];
		}
	}
	void cancel(int a[],int k,int n){
		if(a[k]==1)
		return;
		
			for(int i=2*k;i<=n;i=i+k){
				a[i]=1;
				
				
			}
			return;
		
	}
