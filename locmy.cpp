#include<iostream>
#include<string.h>
using namespace std;
void fastscan(int &number)
{
   
    bool negative = false;
    register int c;
 
    number = 0;
 
    
    c = getchar();
    if (c=='-')
    {
    
        negative = true;
 
       
        c = getchar();
    }
 
    
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
   
    if (negative)
        number *= -1;
}
int expand(string str, int low, int high)
{
	// run till str[low.high] is a palindrome
	while (low >= 0 && high < str.length() 
			&& str[low] == str[high]) 
	{
		if (high-low>=1)
		return 1;
		low--, high++;
	}
	return 0;
}

// Function to find all unique palindromic substrings of given string
int allPalindromicSubstrings(string str)
{
	// create an empty set to store all unique palindromic substrings


	for (int i = 0; i < str.length()-1; i++) 
	{
		// find all odd length palindrome with str[i] as mid point 
	if(str[i]==str[i+1])
	return 1;
}
		// find all even length palindrome with str[i] and str[i+1] as 
		// its mid points
	for(int i=1;i<str.length()-1;i++)
		{
		if(str[i-1]==str[i+1])
		return 1;	
	}

			
	
	// print all unique palindromic substrings
return 0;

}

int main()
{
int t;
fastscan(t);
while(t--)
{
string str;
cin>>str;
	int x=allPalindromicSubstrings(str);
	if (x!=1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	
}
	return 0;
}
