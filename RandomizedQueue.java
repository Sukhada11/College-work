import java.util.Iterator;
import java.util.NoSuchElementException;

import edu.princeton.cs.algs4.StdRandom;

public class RandomizedQueue<Item> implements Iterable<Item> {

	
	
	 private Item[] s;
	private int N=0;
	

	 public boolean isEmpty()
	 { return N == 0; }
	   public RandomizedQueue()   {
		   s = (Item[]) new Object[2]; 
		   
		   // construct an empty randomized queue
	   }
	                  // is the queue empty?
	   public int size()  {
		   return N;// return the number of items on the queue
	   }
	   public void enqueue(Item item) {
		   if (item == null) {
	            throw new java.lang.NullPointerException();
	        }
		   if (N == s.length) resize(2 * s.length);
		   s[N++] = item;
		   
		   // add the item
	   }
	   private void resize(int capacity)
	   {  
	  Item[] copy = (Item[]) new Object[capacity];
	   for (int i = 0; i < N; i++)
	   copy[i] = s[i];
	   s = copy;
	   
}
	   public Item dequeue()      {
		   if (isEmpty()) {
	            throw new java.util.NoSuchElementException();
	        }
	        int randomIndex = StdRandom.uniform(N);
	        Item item = s[randomIndex];
	        
	        // move the last item to fill the gap
	        if (randomIndex != N - 1) {
	            s[randomIndex] = s[N - 1];
	        }
	        // set the last item to null
	      s[N- 1] = null;
	        N--;
	        
	        if (N < s.length/4) {
	            resize(s.length/2);
	        }
	        return item;		   
		   // remove and return a random item
	   }
	   
	   public Item sample()     {
		   
		   if (isEmpty()) {
	            throw new java.util.NoSuchElementException();
	        }
	        int randomIndex = StdRandom.uniform(N);
	        return s[randomIndex];
	    }
	    
		   
		   
		   
		   // return (but do not remove) a random item
	   
	   private class ArrayIterator implements Iterator<Item> {
	       
	        private int index = 0;
	       
	        private int[] random;
	      
	        public ArrayIterator() {
	            random = new int[ N];
	            for (int i = 0; i < random.length; i++) {
	                random[i] = i;
	            }
	            StdRandom.shuffle(random);
	        }
	        
	        public boolean hasNext() {
	            return index < random.length;
	        }
	        
	        public void remove() {
	            throw new UnsupportedOperationException();
	        }
	        
	        public Item next() {
	            if (!hasNext()) {
	                throw new NoSuchElementException();
	            }
	            int randomIndex = random[index];
	            index++;
	            return s[randomIndex];
	        }
	    }
	    
	  
	    public Iterator<Item> iterator() {
	        
	        return new ArrayIterator();
	    }
		   // return an independent iterator over items in random order
	   public static void main(String[] args) {
		   // unit testing (optional)
	   }
	}
