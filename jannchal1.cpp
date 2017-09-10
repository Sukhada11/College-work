#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long	int t;
	cin>>t;
	while(t-->0){
		long long int c,d,l;
		cin>>c>>d>>l;
		long long int t1,t2;
		long long int maxanimal=l/4;
		if(c==0&&d==0&&l==0)
		{
		
		cout<<"yes"<<endl;
		continue;
	}
		if(maxanimal>c+d){
		
		cout<<"no"<<endl;
		continue;
	}
		if(l%4!=0||l==0){
		
		cout<<"no"<<endl;
		continue;
	}
	 if(maxanimal<=c+d)
	{
	 t1=c+d;
}
	if(d>=(float)c/2){
		
		t2=d;
	}	else 
	{
		int catleft=c-2*d;
		if(catleft>0)
		t2=abs(d+catleft);
	}
	
	
	if(t1>=maxanimal&&t2<=maxanimal)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	
	
	}
	
	
	
	
	
	
	return 0;
}
