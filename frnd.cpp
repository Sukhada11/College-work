#include<iostream>
using namespace std;
class db;
class dm{
	
	public:
		int m,cm;
	dm(int x,int y){
		m=x;
		cm=y;
	}
	friend void add(dm a,db b);
};
class db{

	public:
			int f,in;
	db(int x,int y){
		f=x;
		in=y;
	}
	friend void add(dm a,db b);
};
void add(dm a,db b){
float totalinch=b.in+12*b.f;
float totalcm=a.cm+a.m*100;
float cmtoinch=12*totalcm/30.48;
float inchtocm=30.48*totalinch/12;
float sum=totalcm+inchtocm;
float sum1=totalinch+cmtoinch;
float summ=sum/100;
int sumfeet=sum1/12;
int suminch=sum1-sumfeet*12;


cout<<"Addition in m "<<summ<<endl;

cout<<"Addition in feet nd inch "<<sumfeet<<" feet "<<suminch<<" inch "<<endl;
}
int main()
{
	dm m(0,0);
	db f(5,2);
	add(m,f);
}
