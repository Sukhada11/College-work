class exception_hand1{
public static void main(String args[]){
int d,a;
try{
d=0;a=42/d;
System.out.println("Wont be printed");
}
catch(ArithmeticException e){
System.out.println("Division by zero .....Dont you know maths dude!!!");
}
System.out.println("After try nd catch");

}}