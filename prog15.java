import java.io.*;
public class prog15 {
public static void main(String args[])throws IOException{

FileInputStream fin=new FileInputStream(args[0]);
FileOutputStream fout=new FileOutputStream(args[1]);
int v=fin.available();
byte[] b=new byte[v];
fin.read(b);
fout.write(b);


fin.close();
fout.close();
}}