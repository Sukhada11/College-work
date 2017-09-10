import java.io.*;
public class copy{
public static void main(String args[])throws IOException{
FileOutputStream fout=new FileOutputStream("try1.txt");
PrintStream ps=new PrintStream(fout);
String s="Welcome to Java";
ps.println(s);
FileInputStream fin=new FileInputStream("try1.txt");
int n=fin.available();
byte b[]=new byte[n];

fin.read(b);
String s1=new String(b);
System.out.println(s1);
}
}