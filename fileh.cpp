#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream out;
	out.open("new.txt");
	char name[10];
	int age;
	cin>>name;
	cin>>age;
	out<<name<<endl;
	out<<age<<endl;
	out.close();
	ifstream fin;
	fin.open("new.txt");
	fin>>name;
	fin>>age;
	cout<<"NAME: "<<name<<endl;
	cout<<"AGE: "<<age<<endl;
	fin.close();
}
