#include<iostream>
#include<iomanip>
using namespace std;
class inv{
	char item[30];
double cost;
	int no;
	public:
	inv(){
	
		cost=0;
		no=0;
		
	}
	void ins();
	void ext();
};
void inv::ins(){
	cout<<"Enter name of item: "<<endl;
	cin>>item;
	cout<<"Enter cost of item: "<<endl;
	cin>>cost;
	cout<<"Enter quanitityof item: "<<endl;
	cin>>no;
}
void inv::ext(){
cout<<endl;
cout.width(15);
cout.setf(ios::left,ios::adjustfield);
cout<<item;
cout.width(8);
cout<<no;
cout.width(15);
cout.setf(ios::right,ios::adjustfield);
cout.setf(ios::showpoint);
cout.setf(ios::fixed,ios::floatfield);
cout.width(15);
cout.precision(2);
cout<<cost;
}
int main(){
	int n;
	cout<<"Enter no of items to store"<<endl;
	cin>>n;
	inv obj[n];
	for(int i=0;i<n;i++)
	obj[i].ins();
	cout<<setw(8)<<"Item name"<<setw(10)<<"code"<<setw(19)<<"Cost"<<endl;
		for(int i=0;i<n;i++)
	obj[i].ext();
}
