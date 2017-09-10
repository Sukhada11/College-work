import java.io.*;

public class ese10 {
public static void main(String args[]) throws IOException{
	
	File ip=new File("abc.txt");
	File op=new File("xyz.txt");
	BufferedReader br=new BufferedReader(new FileReader(ip));
	PrintWriter pw=new PrintWriter(op);
	String s;
	while((s=br.readLine())!=null)
{
	pw.println(s);
}
	br.close();
}
}
