#include<iostream>
#include<Math.h>
using namespace std;
int main(){
	int count=0;
long long int sum=0;
	for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
						for(int l=0;l<10;l++){
								for(int m=0;m<10;m++){
										for(int n=0;n<10;n++){
												for(int o=0;o<10;o++){
									long long int temp1=pow(i,5)+pow(j,5)+pow(k,5)+pow(l,5)+pow(m,5)+pow(n,5)+pow(o,5);
									long long int temp2=i*1000000+j*100000+k*10000+l*1000+m*100+n*10+o*1;
									if (temp1==temp2){
										if(temp1==1||temp1==0)
										continue;
									cout<<temp1<<endl;
									sum=sum+temp1;
									count++;}
									
		
	}}}
		
			}
		
			 }
			  						}	
									  	}
cout<<count<<endl;
cout<<sum<<endl;	
}
	
	
