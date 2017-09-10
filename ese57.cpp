#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c=a-b;
	try{
		if(c==0)
		throw c;
		else{
		
		float x=a/c;
		cout<<"Result"<<x<<endl;
	}
	}
	catch(int i){
		cout<<"Divide by zero!"<<endl;
	}
	cout<<"end of try catch block";
}
