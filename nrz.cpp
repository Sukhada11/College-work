#include<iostream>
using namespace std;
int main(){
	char c[]="10110";
	cout<<"NRZ for 10110 "<<endl;
	for(int i=0;i<5;i++){
		
		if(c[i]=='1')
		cout<<"__";
		else
		cout<<"--";
	}
}

