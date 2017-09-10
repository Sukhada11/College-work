#include<iostream>
using namespace std;
template<class T>
class num{
	T a;
	T b;
	public:
		num(T x,T y){
			a=x;
			b=y;
		}
	void compare(){
		if(a>b)
		cout<<a;
		else
		cout<<b;
	}

};
int main(){
	num<int>obj(2,3);
	num<float>obj2(2.3,6.8);
	obj.compare();
	obj2.compare();
}
