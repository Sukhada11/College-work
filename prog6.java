import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class prog6 extends Applet implements ActionListener{
TextField t1,t2,t3,t4,t5;
public void init(){
TextField t1=new TextField();
TextField t2=new TextField();
TextField t3=new TextField();
TextField t4=new TextField();
TextField t5=new TextField();
Button b=new Button("Calculate");
add(b);
b.addActionListener(this);
add(t1);
add(t2);
add(t3);
add(t4);
add(t5);
}
public void actionPerformed(ActionEvent ae){
if(ae.getActionCommand()=="Calculate"){
double a=Double.parseDouble(t1.getText());
double b=Double.parseDouble(t2.getText());
double c=Double.parseDouble(t3.getText());


double d=b*b-4*a*c;
double x1=(-b+Math.sqrt(d))/2*a;
double x2=(-b-Math.sqrt(d))/2*a;


t4.setText(Double.toString(x1));

t5.setText(Double.toString(x2));
}
}
}
