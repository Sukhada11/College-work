#include<iostream>
using namespace std;
class invent1{
	int code;
	int no;
	int price;
	public:
		invent1(int a,int b,int c){
			code=a;
			no=b;
			price=c;
		}
		void show(){
			cout<<"Code: "<<code<<endl;
			cout<<"Number: "<<no<<endl;
			cout<<"Price: "<<price<<endl;
		}
		int getcode(){return code;
		}
		int getno(){return no;
		}
		int getprice(){return price;
		}
		operator float(){
			return (price*no);
		}
		
};
class invent2{
	int code;
	int value;
	public:
		invent2(int a,int b){
			code=a;
			value=b;
		}
		void show(){
			cout<<"Code: "<<code<<endl;
			cout<<"Value: "<<value<<endl;
		}
		invent2(invent1 l){
			code=l.getcode();
			value=(l.getno()*l.getprice());
		}
};
int main(){
	invent1 w(2,3,20);
	invent2 x(w);
	w.show();
	x.show();
	float y=w;
	cout<<w<<endl;
}
