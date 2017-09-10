#include<iostream>
using namespace std;
class Test{
	public:
	int t;
	Test(int a){
		t=a;
	}
	Test* operator ->(void){
		return this;
	} 
	void show(){
		cout<<t;
	}
};
int main(){
	Test x(5);
	Test* p=&x;
	void(Test::*pf)()=&Test::show();
	
	cout<<x.t;
	cout<<p->t;
	cout<<x->t;
	cout<<x.*pf;
	cout<<p->pf;
}
