import java.awt.*;
import java.applet.*;/*
<applet code="prog17" width=800 height=800></applet>*/
public class prog17 extends Applet{
public void paint(Graphics g){
g.setColor(Color.BLACK);
g.drawRoundRect(50,50,120,80,10,10);
int x[]={50,110,170,170,110,50};
int y[]={70,50,70,110,130,110};
g.setColor(Color.RED);
g.fillPolygon(x,y,6);
g.setColor(Color.BLACK);
g.drawPolygon(x,y,6);
}
}
