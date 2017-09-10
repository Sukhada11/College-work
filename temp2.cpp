#include<iostream>
using namespace std;
template<class T,class S>
class test{
	T a;
	S b;
	public:
	test(T x,S y){
		a=x;
		b=y;
	}
	void show(){
		cout<<a<<" "<<b;
	}
};
int main(){
	test<int,float>x(2,3.30);
	test<int,char>y(21,'f');
	x.show();
	y.show();
}
