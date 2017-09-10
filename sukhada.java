import java.util.Scanner;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
public class sukhada
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
    public sukhada()
    {
        
    }



 void mood_det(String now_mood)
    {
        // initialise instance variables
        mood=now_mood;
        if(mood.equalsIgnoreCase("happy"))
        System.out.println("Keep Smiling :)");
       else if(mood.equalsIgnoreCase("sad"))
        
joke();

        else if(mood.equalsIgnoreCase("angry"))
{

angry();


}
else
        System.out.println("Wait");
    }




void tellmeabt()
{
 System.out.println("Age: "+age+"\n"+"Weight: "+weight+"kg \n"+"Height: "+height+"cm" );


}
void joke()
{

System.out.println("Wanna hear a joke?");

System.out.println("Yes or no?");
Scanner ans=new Scanner(System.in);
String ans1=ans.nextLine();
if(ans1.equalsIgnoreCase("yes"))

{
  BufferedReader br = null;

		try {

			String sCurrentLine;

			br = new BufferedReader(new FileReader("C:\\\\Users\\WELCOME\\Desktop\\codes\\joke.txt"));

			while ((sCurrentLine = br.readLine()) != null) {
				System.out.println(sCurrentLine);
			}

		} catch (IOException e) {
			e.printStackTrace();
		} finally {
			try {
				if (br != null)br.close();
			} catch (IOException ex) {
				ex.printStackTrace();
			}
		}
  }
  
 


else 
System.out.println("I cant help then :(");
return ;
}

void angry()


{
  BufferedReader br = null;

		try {

			String sCurrentLine;

			br = new BufferedReader(new FileReader("C:\\\\Users\\WELCOME\\Desktop\\codes\\angry.txt"));

			while ((sCurrentLine = br.readLine()) != null) {
				System.out.println(sCurrentLine);
			}

		} catch (IOException e) {
			e.printStackTrace();
		} finally {
			try {
				if (br != null)br.close();
			} catch (IOException ex) {
				ex.printStackTrace();
			}
		}
  }
  
}