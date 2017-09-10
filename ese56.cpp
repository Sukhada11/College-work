#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(int argc,char* argv[]){
	if(argc!=3){
		cout<<"Error ir arguments!"<<endl;
		exit(1);
	}
	ofstream f1,f2;
	f1.open(argv[0]);
	if  (f1.fail()){
		cout<<"Cant open file : "<<argv[0]<<endl;
		exit(1);
	}
	f2.open(argv[1]);
	if ( f2.fail()){
		cout<<"Cant open file : "<<argv[1]<<endl;
		exit(1);
	}
	int a[]={2,3,34,13,23,11,22,84,68,90,45};
	for(int i=0;i<11;i++){
		if(a[i]%2==0)
		f1<<a[i]<<" ";
		else
		f2<<a[i]<<" ";
	}
	f1.close();
	f2.close();
	ifstream fin;
	char ch;
	for(int i=0;i<2;i++){
		fin.open(argv[i]);
		while(fin){
			fin.get(ch);
			cout<<ch;
		}
	}
}

