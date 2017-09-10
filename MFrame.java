import java.awt.*;
import java.awt.event.*;

class MFrame  extends Frame  implements ActionListener{

Label l;
MFrame(){
super("Frame");
 MenuBar mb=new MenuBar();
setMenuBar(mb);
Menu File=new Menu("File");
mb.add(File);
MenuItem m1=new MenuItem("Open");
MenuItem m2=new MenuItem("Cut");
MenuItem m3=new MenuItem("Close");

File.add(m1);
File.add(m2);
File.add(m3);
m1.addActionListener(this);
m2.addActionListener(this);
m3.addActionListener(this);
add(l);

}

public void actionPerformed(ActionEvent ae){
if(ae.getActionCommand()=="Close")
this.setVisible(false);
if(ae.getActionCommand()=="Cut")
l.setText("Cut is selected");
if(ae.getActionCommand()=="Open")
l.setText("Open is selected");
}

}


