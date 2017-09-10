#include<iostream>
using namespace std;
static int isValidTriangle(int a, int b, int c);
int main()
{
	long long int n,r,l,count=0;
	int f=1;
	cin>>n>>r>>l;
	int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int x=((n-1)*n)/2;
int b[x];
int w;
int c[l-r+1];
int y=r;
int i=0;
for(int j=0;j<n;j++){
	for(int k=j+1;k<n;k++){
		b[i]=a[j]*10+a[k];
		i++;
	}}
	
for(int n=0;n<l-r+1;n++){
	c[n]=y;
	y++;

}

	for(int k=0;k<x;k++){
		int s1=b[k]%10;
		int s2=b[k]/10;
		for(int m=0;m<l-r+1;m++){
			if(c[m]!=0)
	 w=	isValidTriangle(s1,s2,c[m]);
if(w==1){
 

c[m]=0;
}
}

}
	for(int m=0;m<l-r+1;m++){
		if(c[m]==0)
		count++;
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

