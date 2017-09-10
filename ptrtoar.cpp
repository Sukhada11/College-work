#include<iostream>
#include<string.h>
using namespace std;
int main(){

int num;
int a[]={2,3,4,5,2,5,29,54,23,51,31,21};
char *ptr[30]={"Stanley","John","Louis","Belle"};
cin>>num;
int *ptr1=a;

for(int i=0;i<12;i++){
	if(*ptr1==num)
	cout<<"Got that no!!";
	ptr1++;
}
 char xyz [30]="John";

for(int i=0;i<4;i++){
	if(!strcmp(xyz,*ptr[i]))
	cout<<"Got that";
	
}
}
