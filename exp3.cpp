#include<iostream>
#include<string.h>
using namespace std;
class Error{
	int code;
	char *name;
	public:
	Error(int a,char *w){
		code=a;
		name=new char[strlen(w)];
		strcpy(name,w);
	}
	void show(){
		cout<<"code no: "<<code;
		cout<<"Name: "<<name;
	}
};
int main(){
	Error e(21,"Just hello!!");
	try{
		throw(e);
	}
	catch(Error ex){
		ex.show();
	}
}
