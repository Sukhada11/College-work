#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
	ifstream fin;
	fin.open("alp.txt");
	string str;
	int a,b,c;
	int t=0;
	while(getline(fin,str)){
			t=0;
		int n=str.length();
		for(int i=0;i<n;i++){
            if(str[i]==' '&&!t){
			a=i;
			t=1;}
			if(str[i]==',')
			b=i;
			

		}
	//	cout<<a<<" "<<b<<endl;
		string op1,op2;
		int j=0;
			for(int i=a+1;i<b;i++){
		cout<<str[i];
		
	
		}
		cout<<endl;
			cout<<op1<<endl;
			j=0;
			for(int i=b+1;i<n;i++){
	cout<<str[i];
		
		}
		cout<<endl;
		
		
	}}
