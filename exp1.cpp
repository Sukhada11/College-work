#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int x=a-b;
	try{
		if(x==0){
			throw x;
			cout<<"Wouldnt be exeecuted ever!!";
		}
		else
		cout<<"not zero!!!";
	}

catch(int x){
	cout<<"AWW...ITS ZERO!!";
}
cout<<"I will be executed anyhow";
}
