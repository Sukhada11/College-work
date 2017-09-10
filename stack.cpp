#include<iostream>
using namespace std;
class stack{
	private:
	int* p;
	int len;
	int top;
	public:
	
	stack(int n)
	
	{



  
	p=new int[n];
		len=n;
		top=-1;}
	
	void push(int x){
		if (top==(len-1)){
			cout<<"stack full"<<endl;
			return;
		}
		else 
		{
			top++;
			p[top]=x;
		
		}
		
	}
	void pop(){
		if(top==-1||p==0)
cout<<"empty stack"<<endl;

else		top--;
		
	}
	void display(){
	cout<<"Stack :"<<endl;
		for(int i=0;i<=top;i++){
			
			cout<<p[i]<<endl;
			
		}
		
		
	}
};
int main()
{
		int n;
				cout<<"Enter length of stack you want to create"<<endl;
				cin>>n;
				stack x(n);
			
				int ch;
				
	while(1){
		cout<<"enter your choice \n 1  to push an element \n 2  to pop an element  \n 3 to display \n 4 to exit"<<endl;
	
		cin>>ch;
	
		switch(ch){
			case 1:
				int l;
				cout<<"Enter an element you want to push"<<endl;
				cout<<endl;
				cin>>l;
			    x.push(l);
			  
			    break;
				
			case 2:
					x.pop();
					 
    				break;
    				
    			case 3:
    			x.display();
    				break;
    				
    				case 4:
    				exit(0);
    				break;	
    				default:
   					cout<<"Enter valid choice"<<endl;
    				
	}
		
	}
	
}
