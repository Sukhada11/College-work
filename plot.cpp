#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,i;
	cin>>a>>b;
long long	int x=a;
long long 	int y=b;
	

    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    
    b=(x*y)/(a*a);

		cout<<b<<endl;
	}
}
