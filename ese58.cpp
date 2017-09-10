#include<iostream>
using namespace std;

void div(int a)throw(int,char){
	
		if(a>0)
		throw 1;
		if(a<0)
		throw 'o';
		else 
		throw (float)9.9;
	
	
	
}
int main()
{
	
	try{
	
	div(2);
	div(-2);
	div(0);
}
catch(int ){
		cout<<"positive";	cout<<endl;
		throw;
	}
		catch(char ){
		cout<<"negative";	cout<<endl;
	}
		catch(float ){
		cout<<"zero";
		cout<<endl;
	}
	catch(...){
		cout<<"Something went wrong!"<<endl;
	}

}


