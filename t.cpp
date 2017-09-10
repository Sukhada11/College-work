#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[100];
	int c=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				for(int l=0;l<10;l++){
					for(int m=0;m<10;m++){
						for(int n=0;n<10;n++){
							for(int o=0;o<10;o++){
								for(int p=0;p<10;p++){
									for(int q=0;q<10;q++){
										for(int r=0;r<10;r++){
											int num1=i+j*10+k*100+l*1000+m*10000+n*100000+o*1000000+p*1000000+q*10000000+r*100000000;
											int num2=i+j*10+k*100+l*1000+m*10000+n*100000+o*1000000+p*1000000+q*10000000+r*100000000;
										int num3=num1*num2;
										if(num3<INT_MAX){
												string s1=to_string(num1);
												string s2=to_string(num2);
												string s3=to_string(num3);
												string x=s1.s2+s3;
												if(x.length()!=9)
													continue;
												else
												{
													if((x.contains("1"))&&(x.contains("2"))&&(x.contains("3"))&&(x.contains("4"))&&(x.contains("5"))&&(x.contains("6"))&&(x.contains("7"))&&(x.contains("8"))&&(x.contains("9"))&&(x.contains("0")))
													a[c]=stoi(x)	;	
												cout<<a[c];
													c++;
												}
											}
										}}}}}}}}}}}
