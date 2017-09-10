#include<iostream>
using namespace std;
static int isValidTriangle(int a, int b, int c);
int main()
{
	long long int n,r,l,count=0;
	int f=1;
	cin>>n>>r>>l;
	int a[n],b[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int j=r;j<=l;j++){

for(int i=0;i<n;i++){
	for(int x=i+1;x<n;x++){
int c=	isValidTriangle(j,a[i],a[x]);
if(c==1){
cout<<j<<a[i]<<a[x];
count++;
goto xyz;
}
}}
xyz:;
}
cout<<count<<endl;
}

static int isValidTriangle(int a, int b, int c){
 
int longestSide = a;
if (b > longestSide )
    longestSide = b;
if(c > longestSide )
    longestSide = c;
if( (longestSide >= (a + b+c -longestSide)) ||  (a == 0 )|| ( b == 0) ||  (c == 0))



return 0;
else return 1;
}
