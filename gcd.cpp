#include<iostream>
#include<math.h>
using namespace std;
void gcd(int a,int b){
	if(a==b)
cout<<a<<endl;
	else{
	if(a<b){
	int c=b-a;
	gcd(c,a);}
	else{
	int c=a-b;
	gcd(c,b);
	}	
	}
}
int main(){
	int a,b;
	cout<<"Enter number to find gcd: "<<endl;
	cin>>a>>b;
	gcd(a,b);
	
}
