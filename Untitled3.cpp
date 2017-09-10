#include<iostream>
using namespace std;
int  static n, q;
void flip(int a[],int beg,int end){
for(int i=beg;i<=end;i++){
	if(a[i]==1)
	a[i]=0;
	else
	a[i]=1;
}
}

void show(int a[],int beg,int end){
int count=0;
for(int i=beg;i<=end;i++){
	if(a[i]==1)
	count++;
}
cout<<count<<endl;
}

int main(){
int  static n, q;
cin>>n>>q;
int a[n]={0};
for(int i=0;i<q;i++){
	int f,b,e;
	cin>>f>>b>>e;
	if(f==0)
	flip(a,b,e);
	else
	show(a,b,e);
	
	
}	

}


