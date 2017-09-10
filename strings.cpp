#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >>t;
	while(t--){
	
	string a,b;
	cin>>a>>b;
	int x=a.length();
	int y=b.length();
	int diff=0,same=0,q=0;
	int min=0,max=0;
	if(x>y)
	diff=x-y;
	else 
	diff=y-x;
	for(int i=0;i<x;i++){
		if(a[i]==b[i]){
		same++;
		if(a[i]=='?'&&b[i]=='?')
		diff++;
}
		

	
		else if(a[i]!=b[i]){
		
		diff++;
		if(a[i]=='?'||b[i]=='?')
		same++;
		
	}}
	max=x-same;
	min=diff;
	cout<<max<<min<<endl;
	
	}
		
	}
	

