public class prog16{
public static void main (String args[]){
StringBuffer sb=new StringBuffer("Yad le hi hoo");
for(int i=0;i<sb.length();i++)
{
if((sb.charAt(i).equalsIgnoreCase("a")||(sb.charAt(i).equalsIgnoreCase("e")||(sb.charAt(i).equalsIgnoreCase("i")||(sb.charAt(i).equalsIgnoreCase("a")||(sb.charAt(i).equalsIgnoreCase("o"))||(sb.charAt(i).equalsIgnoreCase("u"))
sb.setCharAt(i,'X');
}
}
}