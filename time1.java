public class time1{
private int hour;
private int minute;
private int second;
private String s;
time1()
{
this(0,0,0);
}
time1(int h)
{
this(h,0,0);
}
time1(int h,int m)
{
this(h,m,0);
}
time1(int h,int m,int s)
{
settime(h,m,s);
}
public void settime(int h,int m,int s)
{

sethour(h);
setminute(m);
setsecond(s);
}
public void sethour(int h)
{
hour=((h>=0&&h<24)?h:0);
s=(hour>12)?"PM":"AM";

hour=(hour==0)||(hour==12)?12:hour%12;
}
public void setminute(int m)
{
minute=((m>=0&&m<60)?m:0);

}
public void setsecond(int s)
{
second=((s>=0&&s<60)?s:0);

}



public int gethour(){

return hour;
}
public int getminute(){
return minute;
}
public int getsecond(){
return second;
}
public String getS(){
return s;
}
public void show()
{
System.out.format("%02d:%02d:%02d %s",gethour(),getminute(),getsecond(),getS());
}
public void showanother()
{
System.out.printf("The time is %s",this);
}
public String toString()
{
return String.format("The tims is this :%d:%d:%d",hour,minute,second);
}}