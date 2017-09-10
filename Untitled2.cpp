#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void bubblesort(int a[],int n){
	for(int k=0;k<n-1;k++){
		int l=0;
		while(l<n-1-k){
		
		if(a[l]>=a[l+1])
		{
			int temp=a[l];
			a[l]=a[l+1];
			a[l+1]=temp;
		}
		l++;
	}
		
	}
}
void mostFreq3(int *a, int n, int b[3]) {



int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            cout << b[i] << " ";

	return 0;
}
