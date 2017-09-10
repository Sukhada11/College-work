#include<iostream>
#include<string.h>
using namespace std;
void letters(int a[],int c){
	if(c==1)
	cout<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ"<<endl;
	else
	{
		for(int i=65;i<=90;i++){
			int l1=i%10;
			int j=i/10;
			int l2=j%10;
		//	cout<<"l1: "<<l1<<"l2: "<<l2<<endl;
			if(a[l1]!=0&&a[l2]!=0){
				if(l1==l2){
				if(	a[l1]<2)
			continue;	}
			cout<<(char)i;
			}
		
		}
			cout<<endl;
	
}
}
int check(int a[],int n){
	if(a[0]>=1&&a[1]>=1&&a[2]>=1&&a[3]>=1&&a[4]>=1&&a[5]>=1&&a[9]>=1&&a[6]>=2&&a[7]>=2&a[8]>=2)
	return 1;
	else
	return 0;
	}
int main(){
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		int c=0;
		int a[10];
		for(int i=0;i<10;i++)
		
		a[i]=0;
		int n=s.length();
		//cout<<" n : "<<n<<endl;
		int i=0;
		for(int i=0;i<n;i=i+12){
			if(c==1){
	//	cout<<i<<endl;	
			break;
		}
			int j=i;
			while(j<i+12&&j<n){
				//cout<<"j"<<j<<endl;
				//cout<<s[j]<<endl;
				int er=(int)s[j]-'0';
			//cout<<er<<endl;
			a[(int)s[j]-'0']++;
			j++;
			
		}
		 c=check(a,10);
	}
	letters(a,c);
		

}

}


