public class eular4
{
      public static void main(String[] args) {
long fact;   
   long big=0;      
for (int  i=100;i<999;i++) {
         
for(int j=100;j<999;j++)
{
long rev=0;
long prod=i*j;
long t=prod;
while(prod!=0)
{
long d=prod%10;
prod=prod/10;

rev=rev*10+d;
}

if (rev==t)
   {
if(big<=t)
big=t; 
}
    
}}
System.out.println(" "+big);
    }}
     
           
            
         