#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=1;
		while(n>0&&n>=count){
			n=n-count;
			count++;	
		}
		if(n>0)
		count++;
		cout<<count-1<<endl;
	}
} 
