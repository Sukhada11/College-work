import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code="demo2" width=300 height=400>
</applet>
*/
public class demo2 extends Applet
implements KeyListener
{
	int X=20,Y=30;
boolean flag=true;
String n="";
	String msg="KeyEvents--->";
	public void init()
	{
		addKeyListener(this);
		requestFocus();
		setBackground(Color.black);
		setForeground(Color.red);
	}
	public void keyPressed(KeyEvent k)
	{int key=k.getKeyCode();	
		showStatus("KeyDown");
if( key==KeyEvent.VK_ENTER)
flag=false;

		
}
public void keyTyped(KeyEvent k)
	{
int key=k.getKeyCode();	
		
			

	if(flag){	
msg+=Character.toString(k.getKeyChar());
		repaint();
}
else
{
op op1=new op();
n=op1.app();
System.out.println(n);
repaint();

	
}	


	}		

	
	public void keyReleased(KeyEvent k)
	{
		showStatus("Key Up");
	}
	
	public void paint(Graphics g)
	{
		if(flag)
g.drawString(msg,X,Y);
else
g.drawString(n,100,100);
	}




}