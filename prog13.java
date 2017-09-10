import java.io.*;
class prog13{
public static void main(String[] args)throws IOException{
FileOutputStream f=new FileOutputStream("C:\\Users\\WELCOME\\Desktop\\codes\\tryme.txt");
PrintWriter pw=new PrintWriter(f);
String s="Welcome to the world of Java";
pw.println(s);
FileInputStream f1=new FileInputStream("C:\\Users\\WELCOME\\Desktop\\codes\\tryme.txt");
int n=f1.available();
byte b[]=new byte[n];
f1.read(b);

String s1=new String(b);

System.out.println(s);
f.close();
f1.close();
}
}
