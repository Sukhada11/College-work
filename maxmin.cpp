#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long a,n,min,t,i=0,cost;
    cin>>t;
	while(t--)
	{
		cin>>n;
		min=100000;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int n = sizeof(a)/sizeof(a[0]);
 
    sort(a, a+n);
 
		min=a[0];
		cost=min*(n-1);
		cout<<cost<<endl;
	}
	return (0);
} 

