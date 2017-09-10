import java.util.*;
public class eu14 {
	

	
		public static void main(String[] args)
		{
			long begin = System.currentTimeMillis();
			
			int c=0;
		 
			long length = 0;
			int res = 0;
		 
			for(int j = 10; j < 1000000; j++)
			{
				long i = j;
				c=0;
				while (i != 1)
				{
					if (i % 2 == 0)
					{
						i /= 2;
						c++;
					}
					else
					{
						i = (3 * i) + 1;
						c++;
					}
				}
				
				if(c > length)
				{
					length = c;
					res = j;
				}
				
			}
			long end = System.currentTimeMillis();
		 
			System.out.println(res+" with chain size: "+ length);
			System.out.println(end-begin + "ms");
		}
	}

