import java.awt.event.*;
import java.awt.*;
public class popup extends Frame{
String s;
popup(String s){

super(s);
this.s=s;
addWindowListener(new WindowAdapter(){
public void windowClosing(WindowEvent we){
System.exit(0);
setVisible(false);}
});
}


public void paint(Graphics g){
g.setColor(Color.BLACK);
g.drawString("Hello "+s,10,10);
}


}