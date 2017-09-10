#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int nf;
		cin>>nf;
		int  af[nf];
		for(int i=0;i<nf;i++){
			cin>>af[i];
		}
		int k=0;
		int count=0;
		int j,i;
for( i=0,j=0; i<n && j<nf; i++)
        {
            if(a[i]==af[j])
                j++;
        }
 
        if(j==nf)
            printf("Yes\n");
        else
            printf("No\n");
    }
}


