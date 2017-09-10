public class HelloWorld {

    public static void main(String[] args) {
        
int ar[][]=new int[5][4];
for(int i=0;i<5;i++)
{
for(int j=0;j<4;j++)
{

ar[i][j]=i*j;
System.out.print(" "+ar[i][j]);

}
System.out.println(" ");
}
    
}
}

