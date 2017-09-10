#include<iostream>
using namespace std;
void nrz(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]==1)
		cout<<"_";
		else
		cout<<"-";
	}
	cout<<endl;
	int f=0;
		for(int i=0;i<n;i++){
		if(a[i]==1&&f==0){
		f=1;
		cout<<"-";}
		else	if(a[i]==1&&f==1){
		f=0;
		cout<<"_";}
		else 	if(a[i]==0&&f==0){
			cout<<"_";
		}else 	if(a[i]==0&&f==1){
			cout<<"-";
		}
		
	}
	
	
	
}
int main(){
	int a[]={1,1,0,0,1,0,1,0};
	nrz(a,8);
}
