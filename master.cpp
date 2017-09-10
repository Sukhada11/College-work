#include<iostream>
using namespace std;
class person
{protected:
	int code;
	char name[20];
 public:
 	void get_info(){
 		cout<<"Enter the code: "<<endl;
 		cin>>code;
 		cout<<"Enter the name: "<<endl;
 		cin>>name;
	 }
	 void show_info(){
 		cout<<" code: "<<code<<endl;
 		
 		cout<<" name: "<<name<<endl;
 	
	 }
};
class Account :virtual public person{
	protected:
	int pay;
	public:
		void get_pay(){
			cout<<"Enter the pay: "<<endl;
				cin>>pay;
		}
		void show_pay(){
			cout<<" pay: "<<pay<<endl;
		
		}
	
};
class Admin :virtual public person{
	protected:
	int exp;
	public:
		void get_exp(){
			cout<<"Enter the experiance: "<<endl;
				cin>>exp;
		}
		void show_exp(){
			cout<<" pay: "<<exp<<endl;
		
		}
	
};
class Master:public Admin,public Account{
	public:
		void update(){
			get_info();
			get_pay();
			get_exp();
		}
			void display(){
			show_info();
			show_pay();
			show_exp();
		}
};
int main(){
	Master m1,m2;
	m1.update();
	m1.display();
	m2.update();
	m2.display();
}
