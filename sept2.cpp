 #include <iostream>
#include <cstdlib>//srand and rand
#include <ctime>//time
#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

static int count;


void derange(int p[],int a[], int b[], int n) {
    if (n < 2) {
        if (n == 0) {
            for (int i = 0; i <n; ++i) p[b[i]] = a[i];
            if (false) {
                for (int i = 0; i < n; ++i) std::cout << " " << p[i];
                std::cout << "\n";
            } else {
                ++count;
            }
        }
        return;
    }
    for (int i = 0; i < n - 1; ++i) {
        std::swap(a[i], a[n - 1]);
        derange(p, a, b, n - 1);
        std::swap(a[i], a[n - 1]);
        int j = b[i];
        b[i] = b[n - 2];
        b[n - 2] = b[n - 1];
        b[n - 1] = j;
        std::swap(a[i], a[n - 2]);
        derange(p, a, b, n - 2);
        std::swap(a[i], a[n - 2]);
        j = b[n - 1];
        b[n - 1] = b[n - 2];
        b[n - 2] = b[i];
      b[i] = j;
    }
}

int main() {
	int t;
	std::cin>>t;
	while(t--){
	
int n;
std::cin>>n;
int N=n;
int a[N],b[N],p[N];
    for (int i = 0; i < N; ++i) a[i] = b[i] = i;
    derange(p, a, b, N);
 // std:: next_permutation()
 
    count = 0;    for (int i = 0; i < N; ++i) p[i] = i+1;
    while (std::next_permutation(p, p+N) ){
        for (int i = 0; i < N; ++i) {
            if (p[i] == i+1) goto bad;
        }
        for(int i=0;i<N;i++)
        std::cout<<p[i]<<" ";
       std:: cout<<"\n";
       goto xyz;
      //  ++count;
    bad:
    	
        ;
    }
 xyz: ;  
}



}
