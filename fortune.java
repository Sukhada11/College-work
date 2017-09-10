import java.awt.*;  
import java.applet.*;  
  import java.util.Random;
import javax.swing.JOptionPane;
  import java.awt.event.*;

public class fortune extends Applet implements ActionListener {  
  
  Image picture;  
  
  public void init() {  
    picture = getImage(getDocumentBase(),"fortune.jpg");
BackGroundPanel bgp = new BackGroundPanel();
          bgp.setLayout(new FlowLayout());
          bgp.setBackGroundImage(picture);

Button b1=new Button("Click me!!!") ;


b1.addActionListener (this);




 bgp.add(b1);
          

          // set the layout of the applet to Border Layout
          setLayout(new BorderLayout());

          // now adding the panel, adds to the center
          // (by default in Border Layout) of the applet
          add(bgp);



  
  }  

    public void actionPerformed(ActionEvent ae){
fortunet();



}
public void fortunet()
{




Random ran = new Random();
int x = ran.nextInt(6) ;
String s;
switch(x)
{
case 1:
s="You have great day ahead";
break;
case 2:
s="You are gonna get what you want today!";
break;
case 3:

s="Hide under the bed!!Worst day!!";
break;
case 4:
s="Just a another day due";
break;
case 5:
s="You are going to get money today";
break;
case 6:
s="Devil's Day!!!";
default:
s="A bright sunny day ahead";
}


JOptionPane.showMessageDialog(thisFrame,
    s,
    "A plain message",
    JOptionPane.PLAIN_MESSAGE);
}
}



class BackGroundPanel extends Panel {
     Image picture;

     BackGroundPanel() {
          super();
     }
 public void setBackGroundImage(Image picture) {
          this.picture = picture;    
     }





 public void paint(Graphics g) {

          // get the size of this panel (which is the size of the applet),
          // and draw the image
          g.drawImage(picture, 0, 0,
              (int)getBounds().getWidth(), (int)getBounds().getHeight(), this);
     }


}  