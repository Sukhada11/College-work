#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,tr=0,untr=0,x;
		cin>>n>>m>>k;
         int a[n+1];
         for(int i=1;i<n+1;i++){
         	a[i]=0;
         }
         while(m--){
         	cin>>x;
         	a[x]++;
		 }
		 while(k--){
         	cin>>x;
         	a[x]++;
		 }
		 for(int i=1;i<n+1;i++){cout<<a[i];}cout<<endl;
for(int i=1;i<n+1;i++){
if (a[i]==2)
tr++;
else if(a[i]==0)
untr++;	
}


cout<<tr<<" "<<untr<<endl;
}

	}

