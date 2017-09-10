import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="prog14" width=800 height=800></applet>*/
public class prog14 extends Applet implements MouseListener,MouseMotionListener{
int x,y;
String msg=" ";
public void init(){
addMouseListener(this);
addMouseMotionListener(this);
}
public void mouseClicked(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is clicked";
repaint();
}
public void mousePressed(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is pressed";
repaint();
}
public void mouseReleased(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is Released";
repaint();
}
public void mouseEntered(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is entered";
repaint();
}
public void mouseExited(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is exited";
repaint();
}
public void mouseMoved(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is Moved";
repaint();
}
public void mouseDragged(MouseEvent me){
x=me.getX();
y=me.getY();
msg="Mouse is Dragged";
repaint();
}
public void paint(Graphics g){
msg=msg+" at X= "+x+" "+"Y= "+y;
g.drawString(msg,x,y);
}
}
