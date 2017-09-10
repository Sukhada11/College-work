#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream in;
	ofstream out;
	char ch;
out.open("abc.txt");
string name="sukhada kulkarni";

int x=name.length();
for(int i=0;i<x;i++){
	out.put(name[i]);
}

out.close();
in.open("abc.txt");
while(in){
	
	in.get(ch);
	cout<<ch;
}
	
	
	
}
