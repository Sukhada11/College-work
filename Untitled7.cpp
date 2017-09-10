#include<iostream>
using namespace std;
	class figure{
	protected :
		int dim1,dim2;
		public:
			figure(int x,int y){
				dim1=x;
				dim2=y;
			}
virtual	 void area()=0;
};
class tri:public figure{
	public:
		tri(int x,int y):figure(x,y){
		
		}
		void area(){
			cout<<dim1*dim2*0.5;
		}
};
class rect:public figure{
	public:
		rect(int x,int y):figure(x,y){
		
		}
		void area(){
			cout<<dim1*dim2;
		}
};
int main(){
	tri t(2,3);
	t.area();
	rect r(4,3);
	r.area();
}
