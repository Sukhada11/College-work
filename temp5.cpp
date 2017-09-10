#include<iostream>
using namespace std;

template<class W>
void swap1(W &a,W &b){
	W temp;
	temp=a;
	a=b;
	b=temp;
	
}
template<class X>
void bubble(X a[],int n)
{
	for(int i=1;i<=n-1;i++){
		int ptr=1;
		while(ptr<=n-i){
			if(a[i-1]>a[i])
			swap1(a[i-1],a[i]);
			ptr++;
		}
	}
}

int main(){
	int a[]={4,6,13,5,7,3};
	bubble(a,6);
	for(int i=0;i<6;i++){
		cout<<a[i];
		
	}
	int t=89,g=78;
	swap1(t,g);
	cout<<"t="<<t<<" "<<"g="<<g<<endl;
}
