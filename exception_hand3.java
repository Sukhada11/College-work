class exception_hand3
{
public static void main(String args[]){

try{
int a=args.length;
System.out.println("a="+a);
int b=42/a;
int c[]={1};
c[42]=99;
}

catch(ArithmeticException e){
System.out.println("Division by zero "+e);
}
catch(ArrayIndexOutOfBoundsException e){
System.out.println("Array index oob "+e);
}
catch(Exception e){
System.out.println("Generic exception catch"+e);
}
}}