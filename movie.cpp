#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int l[n],r[n],p[n];
		for(int i=0;i<n;i++)
		cin>>l[i];
		for(int i=0;i<n;i++)
		cin>>r[i];	
			for(int i=0;i<n;i++)
	p[i]=r[i]*l[i];
	int max=p[n-1];
	int maxi=n-1;

		for(int i=n-1;i>=0;i--)
		{
			if(max<=p[i]){
				if(r[maxi]<=r[i]){
					max=p[i];
				
					maxi=i;
				}
			}
		}
		
		cout<<maxi+1<<endl;
	
	
	
	
	}
}
