import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code="Key" width=300 height=400>
</applet>
*/
public class Key extends Applet
implements KeyListener
{
	int X=20,Y=30;
	String msg="KeyEvents--->";
	public void init()
	{
		addKeyListener(this);
		requestFocus();
		setBackground(Color.black);
		setForeground(Color.red);
	}
	public void keyPressed(KeyEvent k)
	{
		showStatus("KeyDown");
		int key=k.getKeyCode();
		switch(key) 
		{
			case KeyEvent.VK_UP:
				showStatus("<Up Arrow>");
msg="<Up Arrow>";
				break;
			case KeyEvent.VK_DOWN:
				showStatus("<Down Arrow>");
msg="<Down Arrow>";
				break;
			case KeyEvent.VK_LEFT:
				showStatus("<Left Arrow>");
msg="<Left Arrow>";
				break;
			case KeyEvent.VK_RIGHT:
				showStatus("<Right Arrow>");
msg="<Right Arrow>";
				break;
                        case KeyEvent.VK_F1:
				showStatus("<F1>");
msg+="<F1>";
				break;    
case KeyEvent.VK_F2:
				showStatus("<F2>");
msg="<F2>";
				break;    
case KeyEvent.VK_F3:
				showStatus("<F3>");
msg="<F3>";
				break;    
case KeyEvent.VK_F4:
				showStatus("<F4>");
msg="<F4>";
				break;    
case KeyEvent.VK_PAGE_UP:
				showStatus("<PageUp>");
msg="<PageUp>";
				break; 

		}
		repaint();
	}
	public void keyReleased(KeyEvent k)
	{
		showStatus("Key Up");
	}
	public void keyTyped(KeyEvent k)
	{
		msg=Character.toString(k.getKeyChar());
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,X,Y);
	}
}