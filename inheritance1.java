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
class boxw extends box{
double width;
double height;
double length;
double weight;
double volume()
{
double vol=width*height*length;
return vol;
}
boxw(boxw box_obj){

length=box_obj.length;
width=box_obj.width;
height=box_obj.height;
weight=box_obj.weight;

}
boxw(double l,double w,double h,double we)
{
length=l;
width=w;
height=h;
weight=we;
}
boxw()
{
length=-1;
width=-1;
height=-1;
weight=-1;
}
boxw(double l,double we)
{
length=l;
width=l;
height=l;
weight=we;

}
}

public class inheritance1 {

    public static void main(String[] args) {
        
boxw box1=new boxw(10,20,30,40);
boxw box2=new boxw();
boxw box3=new boxw(10,20);
boxw myclone=new boxw(box1);
System.out.println("height="+box1.height);
System.out.println("length="+box1.length);
System.out.println("width="+box1.width);
System.out.println("weight="+box1.weight);

System.out.println("height="+box2.height);
System.out.println("length="+box2.length);
System.out.println("width="+box2.width);
System.out.println("weight="+box2.weight);

System.out.println("height="+box3.height);
System.out.println("length="+box3.length);
System.out.println("width="+box3.width);
System.out.println("weight="+box3.weight);

System.out.println("height="+myclone.height);
System.out.println("length="+myclone.length);
System.out.println("width="+myclone.width);
System.out.println("weight="+myclone.weight);
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



