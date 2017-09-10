#include <iostream>
#include <cstdio>
 
using namespace std;
 
inline void get_fast(long long int &x)
{
    x=0;
    register int c=0;
    for(;c<48||c>57;c=getchar_unlocked());
    for(;c>47&&c<58;c=getchar_unlocked())
        x=(x<<1)+(x<<3)+c-48;
}
 
int main()
{
	long long int n, i, t, a[10000], j, num, count;
	get_fast(t);
	for(i=0; i<t ;++i){
		get_fast(n);
		get_fast(a[0]);
		count = 0;
		for(j=1; j<n; ++j)
		{
			get_fast(a[j]);
		}	
		get_fast(num);
		if(a[0] - num >= 0)
		    ++count;
		for(j=1; j<n; ++j)
		{
			get_fast(num);
			if(a[j] - a[j-1] - num >= 0){
				++count;
				//cout<<count<<endl;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}

