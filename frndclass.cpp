#include<iostream>
#include<conio.h>
using namespace std;
class data{
	int a,b,c;
	public:
	void getdata(){
		a=30;
		b=20;
	}
	
	friend class addition;	
};
class addition{
	 int a,b,c;
	public:
		friend class data;
		void add(data& x){
			
			c=x.a+x.b;	
		cout<<"Answer is "<<c<<endl;
				}
			
		
};
int main(){
	
	data x;
	x.getdata();
	addition a;
	a.add(x);

}
