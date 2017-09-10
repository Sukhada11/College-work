class test{


int i;
int j;


test(int a,int b){
i=a;
j=b;
}


test(test ob){
i=ob.i;
j=ob.j;
}

void value()
{
i=i*2;
j=j/2;


}

}
public class call1 {

public static void main(String [] arg){
int a=5;
int b=10;
 
test var=new test(a,b);
test ob=new test(var);
var.value();
System.out.println("call by values a:" + ob.i + "b:" + ob.j );
ob.value();
System.out.println("call by refference a:" + ob.i + "b:" + ob.j );

}}