#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	int a[]={3,4,5,2,8};
	int b[]={1,14,22,7,10};
	sort(a,a+5,greater<int>());
	sort(b,b+5);
	int c[10];
	merge(a,a+5,b,b+5,c);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<5;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<10;i++){
		cout<<c[i]<<" ";
	}
}
