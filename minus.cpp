#include<iostream>
using namespace std;
class Test{
	int n;
	public:
	Test(int x){
		n=x;
	}
	void show(){
		cout<<n<<endl;
	}
	void operator -(){
		n=-n;
	}
	
};
int main(){
	Test t(2);
	t.show();
	-t;
	t.show();
}
