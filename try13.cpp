#include<bits/stdc++.h>
#define pt(n) printf("%d\n",n)
#define gc getchar_unlocked
typedef int ll;
 
void sct(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
using namespace std;
int main()
{
  ll t;
  sct(t);
 
  while(t--)
  {
    ll n,i,c=0;
    sct(n);
    ll a[n],b[n];
    
    for(i=0;i<n;i++) sct(a[i]);
    for(i=0;i<n;i++) sct(b[i]);
    
    if(b[0] <= a[0]) c++;
    
    for(i=1;i<n;++i)
    {
         if( b[i]  <= (a[i]-a[i-1]) ) c++;
    }
    
    pt(c);
    
  }      
	return 0;
}
