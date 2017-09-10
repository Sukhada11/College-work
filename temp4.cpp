#include<iostream>
using namespace std;
template<class t1=int>
void swap(t1& a,t1& b){
	t1& temp;
	temp=a;
	a=b;
	b=temp;
	
}


int main(){
	int a=4,b=9;
	float x=5.46,y=8.46;
		cout<<"before "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"after "<<a<<" "<<b<<endl;
		cout<<"before "<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<"after "<<x<<" "<<y<<endl;
}
