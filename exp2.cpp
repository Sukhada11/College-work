#include<iostream>
using namespace std;
void test(int a,int b) throw(int ,double)
{

try{


int c=a-b;
if(c>0)
throw 1;
 if(c<0)
throw 2.3;
else
throw 'h';
}
catch(int x){
				cout<<"a greater then b";
				
			}
				catch(double x){
				cout<<"b greater then a";
			}
				catch(char t){
				
				cout<<"a is equal to b";
			}
}
int main(){
	
		
		test(2,2);
		test(4,4);
		test(9,6);
			
			
			cout<<"end!!";
}
