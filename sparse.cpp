#include<iostream>
using namespace std;


int main(){
	int m;
	int a[10][10];
	cout<<"Enter dimension for square matrix"<<endl;
	cin>>m;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int zero=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0)
			zero++;
		}
	}
	if(zero>=(m*m/2))
{
	cout<<"Matrix is sparse matrix.Its representation is given as below"<<endl;
		int nonzero=m*m-zero;
	int b[nonzero][3];
	int k=0;
		for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]!=0){
				b[k][0]=i+1;
				b[k][1]=j+1;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
		cout<<"row"<<"  "<<"column"<<"  "<<"value"<<endl;
		for(int i=0;i<nonzero;i++){
	
			cout<<b[i][0]<<"    "<<b[i][1]<<"       "<<b[i][2]<<endl;
	
			
			}
			cout<<"traspose form"<<endl;
				cout<<"row"<<"  "<<"column"<<"  "<<"value"<<endl;
				for(int i=0;i<nonzero;i++){
		
			cout<<b[i][0]<<"    "<<b[i][2]<<"       "<<b[i][1]<<endl;
	
			}
}

	else 
	cout<<"Not an sparse matrix"<<endl;
	
}
	




