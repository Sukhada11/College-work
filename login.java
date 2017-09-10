import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code="login" width=500 height=500></applet>*/
public class login extends Applet implements ActionListener{
TextField t1=new TextField(10);
TextField t2=new TextField(10);
TextField t3=new TextField(10);
Button b=new Button("Enter");
Label l=new Label();

public void init(){
add(t1);
add(t2);
add(t3);
add(b);
b.addActionListener(this);
add(l);
}
public void actionPerformed(ActionEvent ae){
if(ae.getActionCommand()=="Enter"){
boolean f=false;
String name=t1.getText();
String email=t2.getText();
String pass=t3.getText();
User u=new User(name,email,pass);
if(!u.validateName())
{
l.setText("Invalid UserName");
f=false;
}
else
f=true;
if(!u.validateEmail())
{
l.setText("Invalid Email ID");
f=false;
}
else
f=true;
if(!u.validatePass())
{
l.setText("Invalid Password");
f=false;
}
else
f=true;

if(f)
{
Frame popup=new Frame("Welcome"+u.name);
popup.setVisible(true);
popup.setSize(200,200);
}}

}
}