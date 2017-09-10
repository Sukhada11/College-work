#include<iostream>
using namespace std;
class M
{
    private:
	    int x,y;
	public :
		M(int e,int d){
		x=e;
		y=d;
	}
	void setxy(int a,int b){
		x=a;
		y=b;
	}
	
friend int sum(M m)	;
};
int sum (M m){
	int M::* px=&M::x;
		
	M *pm=&m;
int M::* py=&M::y;
	int sum=m.*px+pm->*py;

	return sum;

}
int main()
{
	M n(2,3);
	void(M::*pf)(int, int)=&M::setxy;
	
//	(n.*pf)(20,30);
	cout<<sum(n);
	M *p=&n;
	(p->*pf)(30,30);
	cout<<sum(n);
}
