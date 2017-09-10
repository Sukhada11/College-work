#include<iostream>
using namespace std;
static void repeat (long long int a[],long long int l,long long int r,long long int k){		
		
		
	
		int count=0;
		
		for(int i=l+1;i<=r;i++){
			int j=0;
		count=1;
		do{
		
		if(a[i-1]==a[i+j]){
		
			
			count++;
		if(count>k){
			cout<<(a[i-1]);
			return ;
		}	
		}
		j++;
		}	while(j+i!=r);
				
			
		
		
	}

}



int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int a[n];
long long int b[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
		long long int l,r,k;
		for(long long int j=0;j<m;j++){
	
		cin>>l>>r>>k;



		

		repeat(a,l,r,k);
		
		
	}
		
	}
		
		
		
		
		
		
		
		
		
		
		

		
		
	 
