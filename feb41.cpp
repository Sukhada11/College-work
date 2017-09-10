#include<iostream>
using namespace std;
/* Program for finding out majority element in an array */
# include<stdio.h>
# define bool int
 
long long int findCandidate(long long int *, long long int, long long int, long long int,long long int);
bool isMajority(long long int *, long long int, long long int, long long int, long long int,long long int);
 
/* Function to print Majority Element */
void printMajority(long long int a[],long long int l,long long int r, long long int n,long long int k)
{
  /* Find the candidate for Majority*/
  long long int cand = findCandidate(a,l,r,n, k);
 
  /* Print the candidate if it is Majority*/
  if (isMajority(a,l,r,n, k, cand))
   cout<<cand<<endl;
  else
    cout<<-1<<endl;
}
 
/* Function to find the candidate for Majority */
long long int findCandidate(long long int a[],long long int l,long long int r, long long int n,long long int k)
{
    long long int maj_index = 0, count = 1;
    long long int i;
    for (i = l-1; i < r; i++)
    {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
 
/* Function to check if the candidate occurs more than n/2 times */
bool isMajority(long long int a[], long long int l,long long int r,long long int n,long long int k, long long int cand)
{
   long long int i, count = 0;
    for (i = l-1; i <r; i++)
      if (a[i] == cand)
         count++;
    if (count >= k)
       return 1;
    else
       return 0;
}
 
/* Driver function to test above functions */
int main()
{
   long long int n,m;
	cin>>n>>m;
	long long int a[n];
long long int b[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
		long long int l,r,k;
		for(long long int j=0;j<m;j++){
	
		cin>>l>>r>>k;



    printMajority(a, l, r,  n, k);
  
    
}

}

		

	
		
		
	
		
		
		
		
		
		
		
		
		

		
		
	 
