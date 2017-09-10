class prog1{
public static void main(String[] args){

for(int i=0;i<=999;i++)
{
int t=i;
int x=t;
int sum=0;
while(t!=0){
int a=t%10;
sum=sum+a*a*a;
t=t/10;


}
if (sum==x){
System.out.println(" "+x);
}
}
}}