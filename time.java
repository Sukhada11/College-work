public class time{
private int hour;
private int minute;
private int second;
time()
{
this(0,0,0);
}
time(int h)
{
this(h,0,0);
}
time(int h,int m)
{
this(h,m,0);
}
time(int h,int m,int s)
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
public void show()
{
System.out.format("%02d:%02d:%02d ",gethour(),getminute(),getsecond());
}
}