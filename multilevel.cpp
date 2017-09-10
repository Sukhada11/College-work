#include<iostream>
using namespace std;
class student{
	protected:int roll_no;
	public:
		void getroll(){
		cout<<"enter the roll no: ";
		cin>>roll_no;
		}
			void showroll(){
		cout<<"Roll no: "<<roll_no<<endl;
		
		}
};
class Test:public student{
	protected: int s1,s2;
	public:
		void getmarks(){
			cout<<"Enter marks of subject1 and subject2: ";
			cin>>s1>>s2;
		}
			void showmarks(){
			cout<<"marks of subject1 and subject2: "<<s1<<" & "<<s2<<endl;
			
		}
 
};
class Result:public Test{
	int total;
	public:
	void gettotal(){
		total=s1+s2;
	}
	void display(){
		showroll();
		showmarks();
		cout<<" total= "<<total<<endl;
	}
	
	
};


int main(){
	Result s;
	s.getroll();
	s.getmarks();
	s.gettotal();
	s.display();
}
