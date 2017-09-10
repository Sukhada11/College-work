public class eular5
{
      public static void main(String[] args) {
long sum1=0;
long sum2=0;
long diff=0;
for(int i=1;i<=100;i++)
{
sum1=i+sum1;
sum2=sum2+(i*i);
}
sum1=sum1*sum1;
diff=sum2-sum1;
System.out.println(" "+diff);
}}