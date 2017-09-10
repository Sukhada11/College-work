#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   
int n,k;
cin>>n;
 long long fact;
for(int j=0;j<n;j++)
{
  cin>>k;
  fact=1;
  for(int i=1;i<=k;i++)
{
    

    fact=fact*i;
    

}
cout<<fact<<endl;
}
}