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
class Test:virtual public student{
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
class sport:virtual public student {
	protected: int sp;
	public:
		void getsport(){
			cout<<"Enter marks of sports ";
			cin>>sp;
		}
			void showsports(){
			cout<<"marks of sports: "<<sp<<endl;
			
		}
 
};
class Result:public Test,public sport{
	int total;
	public:
	void gettotal(){
		total=s1+s2+sp;
	}
	void display(){
		showroll();
		showmarks();
		showsports();
		cout<<" total= "<<total<<endl;
	}
	
	
};


int main(){
	Result s;
	s.getroll();
	s.getsport();
	s.getmarks();
	s.gettotal();
	s.display();
}
