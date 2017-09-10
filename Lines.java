import java.awt.*;
import java.applet.*;
public class Lines extends Applet{
public void paint(Graphics g){
g.drawLine(0,0,100,100);
g.drawOval(100,100,20,20);
g.drawOval(150,150,20,40);
g.drawArc(200,200,30,30,0,110);
int xpts[]={500,450,400,450,500,550,600,550};
int ypts[]={500,550,600,500,700,500,600,500};
g.drawPolygon(xpts,ypts,8);
}
}