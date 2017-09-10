import 
java.util.Scanner;
public class demo1
{
   

    public static void main(String args[])
    {
 

        sukhada sukh= new sukhada();
sukh.tellmeabt();

System.out.println("Hey Sukhada How are you?");
        Scanner sc=new Scanner(System.in);
        String mood=sc.nextLine();
sukh.mood_det(mood);

   
}
}