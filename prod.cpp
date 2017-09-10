#include<iostream>
using namespace std;
class arr{
	int n;
	public:
		arr(){
		}
	arr(int x)
	{
		n=x;
	}
	~arr(){
	}
	int getnum(){
		return n;
	}
	int multi(arr &a){
		return n*a.getnum();
	}
};
int main(){
	arr obj[10];
	int x;
	cout<<"Enter 10 elements:"<<endl;
	for(int i=0;i<10;i++){
		cin>>x;
	 obj[i]=arr(x);
		
	}
	for(int i=0;i<9;i++){
		if(obj[i].getnum()==obj[i+1].getnum()){
		cout<<obj[i].getnum()<<endl;
		int m=obj[i].multi(obj[i+1]);
		cout<<m<<endl;
		break;
	}
	}
}
