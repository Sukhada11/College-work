import java.util.Scanner;
class sukhada
{
    // instance variables - replace the example below with your own
    private int x;
private int age=18 ;
private int weight=45;
private int height=167;
private String mood;


    /**
     * Constructor for objects of class sukhada
     */
    public sukhada(String now_mood)
    {
        // initialise instance variables
        mood=now_mood;
        if(mood.equals("happy"))
        System.out.println("Keep Smiling :)");
       else if(mood.equals("sad"))
        System.out.println("Wanna hear a joke?");
        else
        System.out.println("Wait");
    }
}
