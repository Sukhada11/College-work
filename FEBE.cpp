#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int s,d,count=0;
		cin>>s>>d;
		int a[s];

		int n=s*d;
			int b[n];
		int x,one=0,zero;
		for(int i=0;i<n;i++){
			cin>>x;
				
			if(x==1)
			one++;
	}
			
		for(int i=0;i<s;i++)
			a[i]=0;	
	cout<<one<<endl;
	for(int j=0;j<s;j++){
	
	for(int i=0;i<(d/2+1);i++)
{
if(one--){

	a[j]++;
	}
	else
	goto xyz 	;
}
}



xyz:
for(int i=0;i<s;i++)
{
	if(a[i]==(d/2+1))
	count++;
}


	cout<<count<<endl;	
	if(count>s-count)	
		cout<<1<<endl;
		else
		cout<<0<<endl;
}
	}
