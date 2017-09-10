#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
	ifstream fin;
	ofstream op;
	ofstream op1;
	ofstream op2;
	op.open("op.txt");
	op1.open("op1.txt");
	op2.open("op2.txt");
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
		
		for(int i=0;i<a;i++){
		op.put(str[i]);
        }
			op<<endl;
			for(int i=a+1;i<b;i++){
		op1.put(str[i]);
	
		}
			op1<<endl;
			for(int i=b+1;i<n;i++){
		op2.put(str[i]);
		}
		op2<<endl;
		}
	
		cout<<"MOT HAS BEEN FORMED!";
	
}
