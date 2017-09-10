#include<iostream>
//#include<stdio.h>
//#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
              char c,fname[10],fname1[10];
              
ifstream a;

char ch;
cout<<"Enter File name to read from :"; 
cin>>fname;
int count=0;
a.open(fname); //The file from which the content will be copied
 //The file to which the content will be copied
while (!a.eof())
{
//reading from file object 'a'
a.get(ch);
count++;
}
cout<<"No of characters in "<<fname<<" file is "<<count<<endl;
a.close();

return 0;
              
              
              
          
}

