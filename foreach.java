public class foreach {

    public static void main(String[] args) {
        
int num[]={1,2,3,4,5,6,7,8,9};
int sum=0;
for(int x:num){
System.out.println("value of x="+x);
sum+=x;
}
System.out.println("sum="+sum);
}
}