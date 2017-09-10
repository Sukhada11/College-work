public enum hp
{
harry("chosen one","Gryffindor","Stag"),
hermione("cleverest witch of her age ","Gryffindor","Otter"),
ron("best friend","Gryffindor","Jack Russell Terrier");

private final String title;
private final String house;
private final String Patronus;
 hp(String title,String house, String Patronus)
{
this.title=title;
this.house=house;
this.Patronus=Patronus;
}

public String gettitle()
{
return title;
}public String gethouse()
{
return house;
}

public String getPatronus()
{
return Patronus;
}




}
