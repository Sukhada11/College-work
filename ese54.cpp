#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char line[80];
	ifstream out1;
	ifstream out2;
	out1.open("Country.txt");
	out2.open("Capital.txt");
	for(int i=0;i<5;i++)
	{
		if(out1.eof()!=0)
		exit(1);
		out1.getline(line,80);
		cout<<line<<" : ";
			if(out2.eof()!=0)
		exit(1);
		out2.getline(line,80);
		cout<<line<<" "<<endl;
		
		
	}
	out1.close();
	out2.close();
}
