
import java.awt.*;
import java.applet.*;
 class prog3 extends Applet{
public void init(){
setBackground(Color.CYAN);
setForeground(Color.GREEN);
}
public void paint(Graphics g){
g.setColor(Color.RED);
int x[]={100,125,125,175,175,200};
int y[]={100,42,157,42,157,100};
g.fillPolygon(x,y,6);
g.setColor(Color.BLUE);
g.drawString("Hello",125,100);



}

}

