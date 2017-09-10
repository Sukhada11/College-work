#include<iostream>
using namespace std;
int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
  	int sum=0;
  	for(int j=0;j<=i;j++){
  		sum+=y[j];	  }
  		if(sum==x[i]){
  			continue;
		  }
		  else
		  return 0;
}
  return 1;
}
int main(){
	int a[]={4,6};
	int b[]={4,2};
	cout<<checkAddSeq(a,b,0);
}


