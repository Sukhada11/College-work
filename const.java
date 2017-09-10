class box{
double width;
double height;
double length;
double volume()
{
double vol=width*height*length;
return vol;
}
box(double l,double w,double h)
{
length=l;
width=w;
height=h;
}
}
public class const {

    public static void main(String[] args) {
        
box box1=new box(10,20,30);
box box2=new box(40,50,60);
System.out.println("height="+box1.height);
System.out.println("length="+box1.length);
System.out.println("width="+box1.width);
System.out.println("height="+box2.height);
System.out.println("length="+box2.length);
System.out.println("width="+box2.width);
double vol=box1.volume();
System.out.println("volume="+vol);
 vol=box2.volume();
System.out.println("volume="+vol);

}
}