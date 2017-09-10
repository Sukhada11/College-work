#include<iostream>
using namespace std;
class stack{
	int len,top;
	int *p;
	public:
	stack(int n){
		len=n;
		top=-1;
		p=new int[len];
	}
	void push(int x){
		if (top==len-1)
		cout<<"STACK OVERFLOW"<<endl;
		else{
		top++;
		p[top]=x;
	}
	}
	int pop(){
		if(top==-1)
		cout<<"STACK UNDERFLOW"<<endl;
		else
		{
			int x=p[top];
			top--;
		}
		
	}
	void display(){
		if (top==-1)
		cout<<"EMPTY";
		else{
		
		cout<<endl;
		for(int i=0;i<=top;i++){
			cout<<p[i]<<" ";
		}
	}}
};
int main(){
	stack s(3);
	s.pop();
	s.display();
	s.push(3);
	s.push(8);
	s.push(7);
	s.push(5);
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	
}
