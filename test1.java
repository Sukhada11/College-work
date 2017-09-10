public class test1{
public static void main(String[] args)
{
time t1=new time(12,13,14);
t1.show();
System.out.println();
System.out.println(t1.gethour());
System.out.println(t1.getminute());
System.out.println(t1.getsecond());

time t2=new time(12);
time t3=new time(12,15);
time t4=new time();

t2.show();
System.out.println();
System.out.println(t2.gethour());
System.out.println(t2.getminute());
System.out.println(t2.getsecond());

t3.show();
System.out.println();
System.out.println(t3.gethour());
System.out.println(t3.getminute());
System.out.println(t3.getsecond());

t4.show();
System.out.println();
System.out.println(t4.gethour());
System.out.println(t4.getminute());
System.out.println(t4.getsecond());


}



}