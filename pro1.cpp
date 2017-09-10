#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int x=0;
		int i;
		

		int a [n+1];

		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		a[0]=0;
			for( i=1;i<=n/2;i++){
			
				if(a[i]!=a[i-1])
				x=x*10+a[i];
			if(a[i]!=a[n-i+1]){
			
	//		cout<<"not eq"<<a[i]<<" "<<a[n-i]<<endl;
			goto xyz;}
			else if (a[i]>7||a[i]<0){
			
	//		cout<<a[i]<<"grt or less"<<endl;
			goto xyz;
		}
		
		
		
		
			
			
		}
		
//		cout<<x<<endl;
//		cout<<a[n/2+1]<<endl;
if(a[i]!=a[i-1])
			
		x=x*10+a[(n/2)+1];
		if(x!=1234567){
		
	//	cout<<x<<endl<<"seq";
		goto xyz;}
		cout<<"yes"<<endl;
		continue;
		xyz:
			cout<<"no"<<endl;
		
	}
}
