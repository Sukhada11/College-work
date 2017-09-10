// C program to print all permutations with duplicates allowed
#include <iostream>
#include <sstream>

#include <string>
#include <string.h>
#include<math.h>
using namespace std;
 int count=0;

int factorial(int n)
{
    return (n <= 1)? 1 :n * factorial(n-1);
}

   string permutation (int rank,int n,string chars) 
{
    int fact;
	int char_idx;
	char this_char;

    if (n == 0)
        return "";

    char_idx = floor(rank / factorial(n - 1));

    this_char = chars[char_idx];
    if(this_char==' ')
    {
    	this_char='9';
	}
   // cout<<this_char<<endl;
    chars.erase (chars.begin()+char_idx,chars.begin()+char_idx+1);
	 
    
         // returns the char with index char_idx and removes it from array

    return (this_char + 
        permutation(rank % factorial(n - 1), n - 1, chars));
}
string addBegin (string low, string high, int diff)
{
    for (int i = 0; i <= diff; i++)
        low = "0"+low;
    high ="0"+   high;



    string result;
    int sum, carry = 0;

    for (int i = low.length()-1; i >= 0; i--)
    {
        sum = low[i] - '0' + high[i] - '0' + carry;
        carry = 0;
        if (sum > 9)
        {
            sum -= 10;
            carry = 1;
        }
        
      

string Result;          

ostringstream convert;   

convert << sum;
Result = convert.str();          
       result =  Result + result;
    }

    return result;
}

string add (string a, string b)
{
    int diff = a.length() - b.length();

    if (diff <= 0) return addBegin(a, b, abs(diff));
    else return addBegin(b, a, diff);
}
int main(){
	int t;
	string sum="0";
	cin>>t;
	int r=t;
	string x;
	while (t--){
	string y="0123456789";
		
		int r;
	cin>>r;
 x=	permutation(r-1,10,y);
 cout<<x<<endl;

 
 	 sum=add(sum,x);
 

}

int len=sum.length();
for(int i=0;i<len;i++){

if(sum[i]!='0'){

	cout<<sum[i];
}}




cout<<endl;
}

