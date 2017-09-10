import java.awt.*;
import java.awt.event.*;

public class MenuFrame1 extends Frame implements ActionListener{
//TextField t1=new TextField(20);
//TextField t2=new TextField(20);
MenuFrame1(){
super("MenuFrame");
MenuBar mb=new MenuBar();
setMenuBar(mb);
Menu Open=new Menu("Open");
MenuItem FileD=new MenuItem("File Dialog");
Menu Edit=new Menu("Edit");
MenuItem m1=new MenuItem("Cut");
MenuItem m2=new MenuItem("Copy");
MenuItem m3=new MenuItem("Paste");
mb.add(Open);
mb.add(Edit);
Open.add(FileD);
Edit.add(m1);
Edit.add(m2);
Edit.add(m3);
m1.addActionListener(this);
m2.addActionListener(this);
m3.addActionListener(this);
FileD.addActionListener(this);
/*t1.setSize(10,10);
t2.setSize(10,10);
 this.add(t1);
this.add(t2);
*/
addWindowListener(new WindowAdapter(){
public void windowClosing(WindowEvent we){
System.exit(0);

}});
}
public void actionPerformed(ActionEvent ae){
String s=new String();
if(ae.getActionCommand()=="Cut"){
//s=t1.getSelectedText();
//t1.setText(" ");
}
if(ae.getActionCommand()=="Copy"){
 //s=t1.getSelectedText();
}
if(ae.getActionCommand()=="Paste"){
//t2.setText(s);
}
if(ae.getActionCommand()=="File Dialog"){
FileDialog fd=new FileDialog(this,"File Dialog");
fd.setVisible(true);
}
}

}