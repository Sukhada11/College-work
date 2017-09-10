import java.io.*;
class prog10{
public static void main(String[] args)throws IOException{
File f=new File("C:\\Users\\WELCOME\\Desktop\\codes\\tryme.txt");
PrintWriter pw=new PrintWriter(f);
pw.println("Welcome to the world of Java");
BufferedReader br=new BufferedReader(new FileReader(f));
String s=br.readLine();
while((s=br.readLine())!=null){
System.out.println(s);
}
}
}