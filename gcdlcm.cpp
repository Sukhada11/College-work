#include<iostream>
using namespace std;
int main(){
	int a,b,t;
	cin>>t;
	while(t--){
	
	cin>>a>>b;
	int x=a;
	int y=b;
	

    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    
    b=(x*y)/a;
    
    cout<<a<<" "<<b<<endl;
}
}
