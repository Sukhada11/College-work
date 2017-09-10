import java.applet.*;
import java.awt.*;
import java.awt.Component;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class ese14 extends Applet {
MenuFrame f;
Label l;
public void init(){
	f = new MenuFrame("Menu Demo");
	f.setSize(500, 500);
	f.setVisible(true);
	}
	public void start() {
	f.setVisible(true);
	}
	public void stop() {
	f.setVisible(true);

this.add(l);

}
}
class MenuFrame extends Frame{
	MenuFrame(String title){
	super(title);
	
	
	MenuBar mb=new MenuBar();
	setMenuBar(mb);
	Menu File=new Menu();
	
	MenuItem mi1=new MenuItem("Open");
	MenuItem mi2=new MenuItem("Cut");
	MenuItem mi3=new MenuItem("Quit");
	File.add(mi1);
	File.add(mi2);
	File.add(mi3);
	mb.add(File);
	 
	
	MyMenuHandler handler=new MyMenuHandler(this);
	mi1.addActionListener(handler);
	mi2.addActionListener(handler);
	mi3.addActionListener(handler);
	
	
	// create an object to handle window events
	MyWindowAdapter adapter = new MyWindowAdapter(this);
	// register it to receive those events
	addWindowListener(adapter);
	
}}
class MyWindowAdapter extends WindowAdapter {
MenuFrame menuFrame;
public MyWindowAdapter(MenuFrame menuFrame) {
this.menuFrame = menuFrame;
}
public void windowClosing(WindowEvent we) {
menuFrame.setVisible(false);
}
}


class MyMenuHandler implements ActionListener{

	MenuFrame menuframe;
	ese14 a=new ese14();
	MyMenuHandler(MenuFrame menuframe){
		this.menuframe=menuframe;
	}
	public void actionPerformed(ActionEvent ae) {
	String s=ae.getActionCommand();
	if(s=="Quit"){
		menuframe.setVisible(false);
	}
	else if(s=="Open"){
		a.l.setText("open is selected");
		
		
	}
	else if(s=="Cut"){
		a.l.setText("cut is selected");
		
		
	}
		
	}
	
	
}