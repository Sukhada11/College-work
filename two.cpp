#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
	for(int k=0;k<n-1;k++){
		int l=0;
		while(l<n-1-k){
		
		if(a[l]>=a[l+1])
		{
			int temp=a[l];
			a[l]=a[l+1];
			a[l+1]=temp;
		}
		l++;
	}
		
	}
}
void show(int a[],int n){
	for(int k=0;k<=n-1;k++){
	cout<<a[k]<<" ";}
	cout<<endl;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
 int n;
 cin>>n;
 int a[n],b[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
  for(int i=0;i<n;i++)
 cin>>b[i];
 bubblesort(a,n);
 bubblesort(b,n);
 int sum=0;
 for(int i=0;i<n;i++){
 	sum=sum+a[i]*b[n-i-1];
 }
 cout<<sum<<endl;
	}

	
}
