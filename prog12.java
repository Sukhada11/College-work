import java.awt.event.*;
import java.awt.*;
import java.applet.*;
/*
<applet code="prog12" width=300 height=300></applet>
*/
public class prog12 extends Applet implements ActionListener{
TextField t1,t2;

public void init(){
TextField t1=new TextField("0");
TextField t2=new TextField("0");
Button b1=new Button("+");
Button b2=new Button("-");
Button b3=new Button("*");
Button b4=new Button("/");
Button b5=new Button("=");
add(t1);
add(t2);
add(b1);
add(b2);
add(b3);
add(b4);
add(b5);
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
b5.addActionListener(this);
}
public void actionPerformed(ActionEvent ae){
int a=0,b=0,c=0;
String s=new String(" ");
if(ae.getActionCommand()=="+"){
a=Integer.parseInt(t1.getText());
s="add";
} else if(ae.getActionCommand()=="-"){
a=Integer.parseInt(t1.getText());
s="sub";
}else if(ae.getActionCommand()=="*"){
a=Integer.parseInt(t1.getText());
s="mul";
} else if(ae.getActionCommand()=="/"){
a=Integer.parseInt(t1.getText());
s="div";
}

if(ae.getActionCommand()=="="){
b=Integer.parseInt(t1.getText());
switch(s){
case "add":
c=a+b;
break;
case "sub":
c=a-b;
break;
case "mul":

c=a*b;
break;

case "div":
c=a/b;
break;
}

t2.setText(Integer.toString(c));



}
}
}