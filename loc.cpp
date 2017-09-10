#include<iostream>
using namespace std;
long long int read_int(){
	char r;
	bool start=false,neg=false;
	long long int ret=0;
	while(true){
		r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
			continue;
		}
		if((r-'0'<0 || r-'0'>9) && r!='-' && start){
			break;
		}
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';
	}
	if(!neg)
		return ret;
	else
		return -ret;
}
long long int func(long long int a[],long long int x,long long int n)
{
long long int sum = 0 ;

	
	for(long long int i=x;i<=n;i+=x)
		sum =(  (sum%1000000007)+(a[i]*a[i])%1000000007)%1000000007;
	
	return sum;
}
int main()
{
	long long int t;
	t=read_int();

	while(t--){
	
	long long int n,q;
n=read_int();
q=read_int();
long long int a[n+1];
for(long long int i=1;i<=n;i++)
a[i]=read_int();
long long int z,x,y,w;
for(long long int i=0;i<q;i++){
	z=read_int();
	if(z==1)
	{
	w=read_int();
		
		long long int ans=func(a,w,n);
	printf("%lld\n",ans);
	}
	
	else if(z==2)
	{
		x=read_int();
		y=read_int();
		a[x]=y;
	}
}



}
}
