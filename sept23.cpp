 #include<iostream>
 using namespace std;
void derangement(int a[],int b[],int n)
{
	if (n==2){
	
	b[0]=2;
	b[1]=1;
}
	 else if (n==3){
	 		b[0]=2;
	b[1]=3;
	b[2]=1;
	 }
	 else
	 {
	 	if (n%2==0){
	 		for(int i=1;i<n;i=i+2){
	 			b[i]=a[i-1];
	 			b[i-1]=a[i];
	 			
			 }}
			 else{
			 
			 for(int i=1;i<n-3;i=i+2){
	 			b[i]=a[i-1];
	 			b[i-1]=a[i];
	 			
			 }
			 b[n-3]=a[n-2];
			 b[n-2]=a[n-1];
			 b[n-1]=a[n-3];
		 }
	 }
	 for(int i=0;i<n;i++){
	 	cout<<b[i]<<" ";
	 }
	 cout<<endl;
}
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
	 int n;
	 cin>>n;
 int a[n];
int b[n];
 for(int i=0;i<n;i++){
 
 a[i]=i+1;
 
 }

derangement( a,b,n); 	
 
}}
 
 

