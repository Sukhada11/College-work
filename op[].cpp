#include<iostream>
using namespace std;
class arr{
	int a[5];
	public:
		arr(int* s){
			for(int i=0;i<5;i++){
				a[i]=s[i];
			}}
			int operator [](int k){
				
				return a[k];
			}};
		int main(){
	int x[]={1,2,3,4,5};
	arr t(x);
	for(int i=0;i<5;i++){
		cout<<t[i];
	}
}
