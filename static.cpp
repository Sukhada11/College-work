#include<iostream>
using namespace std;
class abc{
	private:
		static int count;
		int a;
		public:
			abc(){
			count++;
			cout<<"Obj is being created..."<<endl;
			}
			void showcount(){
				cout<<"Count = "<<count<<endl;
			}
		 static void showno(){
		 		cout<<"Count static! = "<<count<<endl;
		 }
};
int abc::count;

int main(){
	abc a;
	a.showcount();
	abc b;
	abc::showno();
	abc c;
	a.showcount();
}
