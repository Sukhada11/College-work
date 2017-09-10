import java.applet.*;
import java.awt.*;

public class Main extends Applet implements Runnable{
Thread t=null;
int state;
volatile boolean stopflag;
String msg="Hey there!See I had to make it so long to check.Its meaningless ";

public void init()
{

 setBackground(Color.magenta);
   
setForeground(Color.white);
}
public void start(){

t=new Thread(this);
stopflag=false;
t.start();
}
public void run()
{
for(;;){
try{
repaint();
Thread.sleep(1000);
if(stopflag)
break;}
catch(InterruptedException e){}
}
}
public void stop()
{


stopflag=true;
t=null;

}
public void paint(Graphics g){
   
  char ch;
ch=msg.charAt(0);
msg=msg.substring(1,msg.length());
msg+=ch;

 g.drawString(msg,0,30);
   }

}