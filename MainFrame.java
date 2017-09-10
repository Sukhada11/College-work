import java.awt.event.*;
import java.awt.*;
class MainFrame extends Frame implements WindowListener{

Label l=new Label();
MainFrame(){
super("Frame");
add(l);
this.addWindowListener(this);

}
public void windowIconified(WindowEvent we){
l.setText("Window is Iconified");
this.setTitle("Window is Iconified");
}
public void windowDeiconified(WindowEvent we){
l.setText("Window is DeIconified");
this.setTitle("Window is DeIconified");
}
public void windowActivated(WindowEvent we){
l.setText("Window is Activated");
this.setTitle("Window is Activated");
}
public void windowDeactivated(WindowEvent we){
l.setText("Window is Deactivated");
this.setTitle("Window is DeActivated");
}
public void windowOpened(WindowEvent we){
l.setText("Window is Opened");
this.setTitle("Window is Opened");
}
public void windowClosed(WindowEvent we){
l.setText("Window is Closed");
this.setTitle("Window is Closed");
}
public void windowClosing(WindowEvent we){
this.setVisible(false);
}
}