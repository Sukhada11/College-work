public class Plot
{
    private int width;
    private int length;

    /**
        Constructs a plot of a given size.
        @param width the width of the plot
        @param length the length of the plot
    */
    public Plot(int width, int length)
    {
        this.width = width;
        this.length = length;
    }

    /**
     * Calculates the number of circular fields that can fit on this plot.
     */
    public int getNumberOfFields(int radius)
    {
        // TODO: Using the formulas that we developed, compute
        // the total number of rows, then
        // the number of even and odd rows,
        // the number of columns in each even and odd row,
        // and finally the total number of fields
   double colineven=0;
        double colinodd=0;
        double ans=1;
        while(ans>=0)
     {
       ans= width-2*radius;
        
       colinodd++;
          
    }
ans=1;
     while(ans>=0)
     {
       ans= width-400-2*radius;
        
        colineven++;
          
    }
    
  
      double roweven;
        double rowodd;
        double ans1=1;
        double ans2=1;
        for(double i=0;;i++)
        {
       if(i%2==0)
       {   
            while(ans>=0)
     {
       ans1= length-radius*i*1.732;
        
        colineven++;
          
    }
      }
    
   
         if(i%2!=0)
       {   
            while(ans>=0)
     {
       ans2= length-radius*i*1.732;
        
        colinodd++;
          
    }
      }
        
        
         if((ans1<=0)&&(ans2<=0))
            break me;
        }
        
        
        
        return(roweven*colineven+ rowodd*colinodd);
        
        
        
        
        }
}


public static void main(String[] args)
    {
        Plot plot = new Plot(1900, 4000);
        System.out.println(plot.getNumberOfFields(400));
        System.out.println("Expected: 8");
        System.out.println(plot.getNumberOfFields(300));
        System.out.println("Expected: 18");
    }
}
