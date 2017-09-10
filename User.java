public class User{
String name;
String pass;
String email;
boolean n=false;
boolean e=false;
boolean p=false;
User(String name,String email,String pass){
this.name=name;
this.email=email;
this.pass=pass;

}
public boolean validateName(){
if(name.length()>=3)
n=true;
else 
n=false;
return n;
}
public boolean validateEmail(){
if(email.endsWith(".com"))
e=true;
else 
e=false;
return e;
}

public boolean validatePass(){
boolean d=false;
boolean l=false;
boolean s=false;
char c;
for(int i=0;i<pass.length();i++)
{
c=pass.charAt(i);
if(Character.isDigit(c))
d=true;
else if (Character.isLetter(c))
l=true;
else if ((!Character.isDigit(c))&&(!Character.isLetter(c)))
s=true;


}
if(d&&l&&s&&(pass.length()>=6))
p=true;
else
p=false;
return p;
}

}