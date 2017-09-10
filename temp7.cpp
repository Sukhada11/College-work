#include<iostream>
using namespace std;
template<class T>
void show(T a){
	cout<<"display 1: "<<a<<endl;
}
template<class T,class W>
void show(T a,W b){
	cout<<"display 2: "<<a<<" "<<b<<endl;
}

void show(int a){
	cout<<"display 3: "<<a<<endl;
}
int main(){
	show(23);
	show(23.1);
	show(6,7);
}
