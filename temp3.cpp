#include<iostream>
using namespace std;
template<class T=int,class D=int>
class test{
	T a;
	D b;
	public:
		test(T x,D y){
			a=x;
			b=y;
		}
		void show(){
			cout<<endl;
			cout<<a;
			cout<<endl;
			cout<<b;
		}
};
int main(){
	test<int,float>g(2,4.5);
	test<>y('a','b');
	g.show();
	y.show();
}
