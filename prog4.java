import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class prog4 extends Applet implements ActionListener{
Button b1;
TextField t1,t2;
Label l1,l2;
public void init(){
t1=new TextField();
t2=new TextField();
l1=new Label("Enter the number here ");
l2=new Label("The square root : ");
b1=new Button("Calculate");

add(l1);
add(t1);
add(b1);
add(l2);
add(t2);
b1.addActionListener(this);

}


public void actionPerformed(ActionEvent ae) {
	if(ae.getActionCommand()=="Calculate"){

double n=Double.parseDouble(t1.getText());
double ans=Math.sqrt(n);
t2.setText(Double.toString(ans));
}
}
}

