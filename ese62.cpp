#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
	int x[10]={3,4,2,6,1};
	int y[]={13,24,62,46,16};
	int z[10];
	list<int>l1(x,x+5);
		list<int>l2(y,y+5);
		list<int>l3(z,z+10);
		l1.sort();
		l2.sort();
		for(int i=0;i<5;i++){
			cout<<x[i]<<" ";
		}cout<<endl;
			for(int i=0;i<5;i++){
				
				
				
			cout<<y[i]<<" ";
					
		}cout<<endl;
	l1.merge(l2);
		for(int i=0;i<10;i++){
			cout<<l1[i]<<" ";}
}
