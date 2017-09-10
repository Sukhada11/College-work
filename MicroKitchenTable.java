public class MicroKitchenTable
{
    public static void main(String[] args)
    {
        int saraCookiesPerDay = 3;
        double saraCerealPerDay = .06;
        String saraName = "Sara";
        int cayCookiesPerDay = 1;
        double cayCerealPerDay = 0;
        String cayName = "Cay";
String dash="|";
        System.out.println("cookies | cereal | name");
        System.out.println("------------------------");
         System.out.printf("%8d",saraCookiesPerDay);
System.out.printf("%s",dash);
 System.out.printf("%8.2f",saraCerealPerDay);
System.out.printf("%s",dash);
System.out.printf("%s",saraName);
System.out.println(" ");
 System.out.printf("%8d",cayCookiesPerDay);
System.out.printf("%s",dash);
 System.out.printf("%8.2f",cayCerealPerDay);
System.out.printf("%s",dash);
System.out.printf("%s",cayName);
        // TODO: Print entries for Sara
        // Be sure to line up the entries in the columns using printf
        // Print floating-point numbers with two digits after the decimal point

        // TODO: Print entries for Cay

    }
}
