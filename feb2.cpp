#include<iostream>
using namespace std;
int main()
{
	long long int n,r,l,count=0;
	int f=1;
	cin>>n>>r>>l;
	int a[n],b[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int k=l;k<=r;k++){
	for(int i=0;i<n;i++){
		b[i]=a[i]+k;
	}
	for(int j=0;j<n;j++){
		for(int m=0;m<n;m++){
	  if(a[m]==b[j]||b[j]==0){
	  
	  f=0;
	  break;}
	
       }
       if (f)
       count++;

	
}
	


}
cout<<count<<endl;
	
}
