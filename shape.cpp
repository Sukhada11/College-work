#include<iostream>
using namespace std;
class shape{
	protected:
		double dim1,dim2;
		public:
		void get_data(){
			cout<<"Enter dimensions :"<<endl;
			cin>>dim1>>dim2;
		}
		virtual void display_area()=0;
};
class triangle:public shape{
	public:
	void display_area(){
		double area=0.5*dim1*dim2;
		cout<<"Area of triangle ="<<area<<endl;
	}
};
class rectangle:public shape{
	public:
	void display_area(){
		double area=dim1*dim2;
		cout<<"Area of rectangle ="<<area<<endl;
	}
};

int main(){
	shape *ptr;
	triangle t;
	rectangle r;
	ptr=&t;
	ptr->get_data();
	ptr->display_area();
	ptr=&r;
	ptr->get_data();
	ptr->display_area();
}
