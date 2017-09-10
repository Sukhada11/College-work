#include<iostream>
#include<fstream>
using namespace std;
class shape{
	protected:
		int d1,d2;
		public:
	virtual void area()=0;
		void getdata(int a,int b){
			d1=a;
			d2=b;
		}
};
class rect:public shape{
	public:
		void area(){
			cout<<"Area= "<<d1*d2<<endl;
		}
};
class tri:public shape{
	public:
		void area(){
			cout<<"Area= "<<d1*d2*0.5<<endl;
		}
};	

int main(){
	shape *s;
	rect r;
	tri t;
	s=&r;
	s->getdata(2,4);
	s->area();
	s=&t;
	s->getdata(2,4);
	s->area();
}
	
