#include<iostream>
using namespace std;
template<class T,class W>
void mean(T a,W b){
float m=(a+b)/2;
cout<<"mean= "<<m<<endl;	
}
int main(){
	mean(23,1);
	mean(2.4,1);
};
