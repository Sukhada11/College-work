#include<iostream>
using namespace std;
class abc{
	
	
	int a;
	public:
		
	friend istream & operator >>(istream & ,abc&);
	friend ostream & operator <<(ostream &,const abc&);
};
 istream& operator>>(istream& in,abc& t){
		in>>t.a;
		return in;
	}
 ostream& operator<<(ostream& out,const abc& t){
	out<<t.a;
		return out;
	}
	int main(){
		abc x;
		cin>>x;
		cout<<x;
	}
