#include<iostream>
using namespace std;
int max(int []);
int main(){
	int sum=0;
	int a[]={1,2,3,4};
	int count=max(a);
	cout<<count<<endl;
	sum=sum+count;
	 int b[]={1,2,4,3};
count=max(b);
	cout<<count<<endl;
	sum=sum+count;
int	 c[]={1,4,3,2};
count=max(c);
	cout<<count<<endl;
	sum=sum+count;
int	 d[]={1,4,2,3};
count=max(d);
	cout<<count<<endl;
	sum=sum+count;
int	 e[]={1,3,2,4};
count=max(e);
	cout<<count<<endl;
		sum=sum+count;
int	 f[]={1,3,4,2};
count=max(f);
	cout<<count<<endl;
		sum=sum+count;
		
		
		
		
		
		
		
		
		
		
		
		
		cout<<sum<<endl;		
		cout<<"----------------------------------------------------"<<endl;	
		
		
		
			int a1[]={2,1,3,4};
	 count=max(a1);
	cout<<count<<endl;
	sum=sum+count;
	 int b1[]={2,1,4,3};
count=max(b1);
	cout<<count<<endl;
	sum=sum+count;
int	 c1[]={2,4,3,1};
count=max(c1);
	cout<<count<<endl;
	sum=sum+count;
int	 d1[]={2,4,1,3};
count=max(d1);
	cout<<count<<endl;
	sum=sum+count;
int	 e1[]={2,3,1,4};
count=max(e1);
	cout<<count<<endl;
		sum=sum+count;
int	 f1[]={2,3,4,1};
count=max(f1);
	cout<<count<<endl;
		sum=sum+count;
		cout<<sum<<endl;		
		cout<<"----------------------------------------------------"<<endl;	
		
		
		
		
		
		
		
	int a11[]={3,1,2,4};
	 count=max(a11);
	cout<<count<<endl;
	sum=sum+count;
	 int b11[]={3,1,4,2};
count=max(b11);
	cout<<count<<endl;
	sum=sum+count;
int	 c11[]={3,4,2,1};
count=max(c11);
	cout<<count<<endl;
	sum=sum+count;
int	 d11[]={3,4,2,3};
count=max(d11);
	cout<<count<<endl;
	sum=sum+count;
int	 e11[]={3,2,1,4};
count=max(e11);
	cout<<count<<endl;
		sum=sum+count;
int	 f11[]={3,2,4,1};
count=max(f11);
	cout<<count<<"      hey"<<endl;
		sum=sum+count;
		cout<<sum<<endl;		
		cout<<"----------------------------------------------------"<<endl;	
		
		
		
					int a12[]={4,1,3,2};
count=max(a12);
	cout<<count<<endl;
	sum=sum+count;
	 int b12[]={4,1,2,3};
count=max(b12);
	cout<<count<<endl;
	sum=sum+count;
int	 c12[]={4,2,3,1};
count=max(c12);
	cout<<count<<endl;
	sum=sum+count;
int	 d12[]={4,2,1,3};
count=max(d12);
	cout<<count<<endl;
	sum=sum+count;
int	 e12[]={4,3,1,2};
count=max(e12);
	cout<<count<<endl;
		sum=sum+count;
int	 f12[]={4,3,2,1};
count=max(f12);
	cout<<count<<endl;
		sum=sum+count;
	cout<<sum<<endl;		
		cout<<"----------------------------------------------------"<<endl;	
		
		
		cout<<sum<<endl;
}
int max(int x[]){
	int largest=x[0];
int count =0;
	for(int i=1;i<4;i++){
		if(x[i]>largest){
			
			largest=x[i];
			count++;
		
		}
	
		}
		return count;
	}
	

