#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int diff=abs(n-m);
		if(k<=diff){
			diff=diff-k;
		}else
		diff=0;
		cout<<diff<<endl;
	}
}
