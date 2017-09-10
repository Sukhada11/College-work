public class test2{
public static void main(String[] args)
{
time1 t1=new time1(13,32,16);
t1.show();
System.out.println();
System.out.println(t1.gethour());
System.out.println(t1.getminute());
System.out.println(t1.getsecond());
System.out.println(t1.getS());
time1 t2=new time1(14);
time1 t3=new time1(18,58);
time1 t4=new time1();
t1.showanother();
System.out.println();
t2.show();
System.out.println();
System.out.println(t2.gethour());
System.out.println(t2.getminute());
System.out.println(t2.getsecond());
System.out.println(t2.getS());

t3.show();
System.out.println();
System.out.println(t3.gethour());
System.out.println(t3.getminute());
System.out.println(t3.getsecond());
System.out.println(t3.getS());

t4.show();
System.out.println();
System.out.println(t4.gethour());
System.out.println(t4.getminute());
System.out.println(t4.getsecond());
System.out.println(t4.getS());

System.out.printf("%s",t4);
}



}