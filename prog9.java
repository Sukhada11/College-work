import java.awt.event.*;
import java.awt.*;
 import java.applet.*;
 public class prog9 extends Applet{
int x1=0,y1=0,x2=0,y2=0;
public void init(){
addMouseListener(new MouseAdapter(){
public void mouseClicked(MouseEvent me){
x1=me.getX();
y1=me.getY();
repaint();
}
public void mousePressed(MouseEvent me){
x1=me.getX();
y1=me.getY();
repaint();
}

public void mouseReleased(MouseEvent me){
x2=me.getX();
y2=me.getY();
repaint();
}
});


addMouseMotionListener(new MouseMotionAdapter(){
public void mouseDragged(MouseEvent me){
x2=me.getX();
y2=me.getY();
repaint();
}
});}
public void paint(Graphics g)
{
g.setColor(Color.BLACK);
g.drawRect(x1,y1,x2,y2);
}
}

