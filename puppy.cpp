#include<string.h>
#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		int a,b;
		int n=x.length();
		for(int i=0;i<n;i++){
			if (x[i]=='a')
			a++;
			else
			b++;
		}
		if(a>b)
		cout<<b<<endl;
		else
		cout<<a<<endl;
	}
}
