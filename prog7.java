public class prog7{
public static void main(String[] args){
Figure f;
Rectangle r=new Rectangle(5,6);
Triangle t=new Triangle(4,5);
f=r;
f.area();
f=t;
t.area();
}
}