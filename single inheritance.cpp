#include<iostream>
using namespace std;
class employee{
	private :
		int id;
		char name[20];
		char des[10];
		public:
			void getdata();
			void showdata();
};
void employee::getdata(){
	cout<<"Enter id: "<<endl;
	cin>>id;
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Enter des: "<<endl;
	cin>>des;
	
	
}
void employee::showdata(){
	cout<<"id: "<<id<<endl;
		cout<<"name: "<<name<<endl;
			cout<<"des: "<<des<<endl;
	
}

class salary:public employee{
	int hra,da,ns,pf,tra;
	public:
		void getsal(){
			cout<<"entre hra,da,pf,tra"<<endl;
			cin>>hra>>da>>pf>>tra;
		}
		void showsal(){
			ns=hra+da+pf+tra;
			cout<<"Net salary="<<ns<<endl;
		}
};
int main()
{
	salary s1;
	s1.getdata();
	s1.getsal();
	s1.showdata();
	s1.showsal();
	
}



