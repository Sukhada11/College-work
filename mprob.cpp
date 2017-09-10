#include <iostream>
using namespace std;
void typ1(int a[],int x,int y,int n){

		for(int i=x-1;i<y;i++){
			a[i]=a[i]+1;
		}
		//cout<<"after type 1"<<endl;
		//	for(int i=0;i<n;i++){
		//	cout<<a[i];
		//}//
}


	void typ2(int a[],int ty[],int b[][2],int x,int y,int n)
{

	for(int i=x-1;i<y;i++)
			{
				int type=ty[i];
					int		x1=b[i][0];
		int		y1=b[i][1];
				if(type==1){
								
	
				typ1(a,x1,y1,n);
		//			cout<<"After subpart of type 2.1"<<endl;
		//	for(int i=0;i<n;i++){
		//	cout<<a[i];
		//}
				}
				else
{

				typ2(a,ty,b,x1,y1,n);
		//			cout<<"After subpart of type 2.2"<<endl;
		//	for(int i=0;i<n;i++){
		//	cout<<a[i];
		//}
		}
	
				
			
		//	cout<<"After type 2"<<endl;
		//		for(int i=0;i<n;i++){
		//	cout<<a[i];
		//}
		
		
	}
		}
		
                    
		
		







int main() {
	int t;
scanf("%d",&t);
while(t--){
	
int n,m;
scanf("%d%d",&n,&m);
int a[n];
for(int i=0;i<n;i++){
	a[i]=0;
}
int ty[m];
int b[m][2];
int j=0;
while(m--){
	int type,x,y;
scanf("%d%d%d",&type,&x,&y);
	b[j][0]=x;
	b[j][1]=y;
	ty[j]=type;
	j++;
	if(type==1){
	 typ1(a,x,y,n);
		}
		else
		{
		typ2(a,ty,b,x,y,n);
	}
}
	
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		cout<<endl;
}
}
