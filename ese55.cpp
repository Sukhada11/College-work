#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
	fstream f;
	f.open("new.txt",ios::in|ios::out);
	char s[7]="hello";
	char ch;

	for(int i=0;i<7;i++){
		f.put(s[i]);
	}
	f.seekg(0);
while(f){

		f.get(ch);
		cout<<ch;
	}
}
