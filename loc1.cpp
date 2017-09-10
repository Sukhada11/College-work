#include<iostream>
#include<string.h>
using namespace std;

 int CountPS(string str, int n)
    {
   
          
        int dp[n][n];
      
        
     int P[n][n];
      
              for (int i= 0; i< n; i++){
		 
          for (int j= 0; j< n; j++){
		  dp[i][j]=0;
		  P[i][j]=0;
		  }
	}
		  
        for (int i= 0; i< n; i++)
            P[i][i] =1;
      
        
        for (int i=0; i<n-1; i++)
        {
            if (str[i] == str[i+1])
            {
                P[i][i+1] = 1;
                return 1;
                dp[i][i+1] = 1 ;
            }
        }
      
        
        for (int gap=2 ; gap<n; gap++)
        {
            for (int i=0; i<n-gap; i++)
            {
               
                int j = gap + i;
      
                
                if (str[i] == str[j] && P[i+1][j-1] ){
				
                    P[i][j] = 1;
      return 1;
  }
          
                if (P[i][j] == 1)
                    dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1];
                else
                    dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
            }
        }
      
       
        return dp[0][n-1];
    }
     
    // Driver Method

int main(){
	int t;
	cin>>t;
	while(t--){
	string x;
		cin>>x;
		int n=x.length();
		int p=CountPS(x,n);
		//cout<<p<<endl;
		if (p>0)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
				}
			}


