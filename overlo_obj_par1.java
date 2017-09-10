class box{
double width;
double height;
double length;
double volume()
{
double vol=width*height*length;
return vol;
}
box(box box_obj){

length=box_obj.length;
width=box_obj.width;
height=box_obj.height;

}
box(double l,double w,double h)
{
length=l;
width=w;
height=h;
}
box()
{
length=-1;
width=-1;
height=-1;
}
box(double l)
{
length=l;
width=l;
height=l;
}
}
public class overlo_obj_par1 {

    public static void main(String[] args) {
        
box box1=new box(10,20,30);
box box2=new box();
box box3=new box(10);
box myclone=new box(box1);
System.out.println("height="+box1.height);
System.out.println("length="+box1.length);
System.out.println("width="+box1.width);
System.out.println("height="+box2.height);
System.out.println("length="+box2.length);
System.out.println("width="+box2.width);
System.out.println("height="+box3.height);
System.out.println("length="+box3.length);
System.out.println("width="+box3.width);
System.out.println("height="+myclone.height);
System.out.println("length="+myclone.length);
System.out.println("width="+myclone.width);
double vol=box1.volume();
System.out.println("volume="+vol);
 vol=box2.volume();
System.out.println("volume="+vol);
vol=box3.volume();
System.out.println("volume="+vol);
vol=myclone.volume();
System.out.println("volume="+vol);
}
}