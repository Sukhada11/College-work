import java.io.*;

public class filecopy {
public static void main(String args[]) throws IOException{
	
	File ip=new File("abc");
	File op=new File("xyz");
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
