#include<iostream>
using namespace std;
class Complex{
	int i;
	int r;
	public:
		Complex(){
			i=0;r=0;
		}
	friend istream & operator >>(istream &in, Complex &c);
	friend ostream & operator <<(ostream &out,const Complex &c);

};
istream & operator >>(istream &in,Complex &c){
	in>>c.r;
	in>>c.i;
	return in;
}
ostream & operator <<(ostream &out,const Complex &c){
	out<<c.r;
	out<<"+";
	out<<c.i;
	out<<"i";
	return out;
}
int main(){
	Complex c;
	cin>>c;
	cout<<c;
}
