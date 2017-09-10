#include<iostream>
using namespace std;
void max(int []);
int main(){
	
	int a[]={5,6,3,2,4};
	max(a);
}
void max(int x[]){
	int largest=x[0];
	int sec=x[1];
	for(int i=0;i<5;i++){
		if(x[i]>largest){
			int temp=largest;
			largest=x[i];
			sec=temp;
		}
		else if(x[i]>sec&&x[i]<largest){
			sec=x[i];
		}
	}
	cout<<"largest= "<<largest<<" Sec largest= "<<sec<<endl;
}
