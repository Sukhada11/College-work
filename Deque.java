import java.util.Iterator;
import java.util.NoSuchElementException;

public class Deque<Item> implements Iterable<Item> {
	private Node first,last;
private int size;
	
	 private class Node
	 {
		 private Item item;
	       
	        private Node prev;
	        
	        private Node next;
	 }

	   public Deque()    {
		  first = null;
		  last = null;
		  size = 0;
		   
	   }
	   public boolean isEmpty(){
		   return first == null;// is the deque empty?
	   }
	   public int size()   {
		   return size;
		   // return the number of items on the deque
	   }
	   public void addFirst(Item item) {
		   if (item == null) {
	            throw new java.lang.NullPointerException();
	        }

	 Node node = new Node();
	 node.item = item;
	        if ( isEmpty() ) {
	            last = node;
				 first= node;
	        } else {
	        	
	        	
	        	first.prev = node;
	        	node.next = first;
	        	first = node;
	        
	            
	           
	           
	        }

	        size++;
	    }
	   
	   public void addLast(Item item)   {
		   
		   if (item == null) {
	            throw new java.lang.NullPointerException();
	        }
Node node = new Node();
node.item = item;
		   if(isEmpty()){
			   first = node;
			   last  = node;}
		   else
		   {
			   last.next=node;
			   node.prev=last;
			   last=node;
		   }
		   
		   
		   size++;
		   
		   
		   
		   
		   
		   // add the item to the end
	   }
	   public Item removeFirst() {
	        if ( isEmpty()) {
	            throw new java.util.NoSuchElementException();
	        }

	        Item item = first.item;
	        if (first == last) {
	            last = null;
	            first=null;
	        }
	        else{
	        	 
	        	 Node oldfirst = first;
	        	 oldfirst.next = null;
	 	        first = first.next;
	 	   //oldfirst = null;
		   if(first != null){
	 	            first.prev = null;
		   }
	 	    
	        }
size--;
	        return item;
	        
	    }
	   public Item removeLast(){
		   
		   if (isEmpty()) {
	            throw new java.util.NoSuchElementException();
	        }
		   Item item=last.item;
		   
		   if(first == last){
			   first = null;
			   last = null;
		   }
		   else
		   {
			  
			   Node oldlast = last;
			   last = last.prev;
			   
		   //oldlast = null;
			   oldlast.prev = null;
			if (last != null)
				   last.next = null;
		
			   
			   
			   
		   }
		   size--;
		   return item;
		   
	   }   
		   // remove and return the item from the end
	   
	   private class ListIterator implements Iterator<Item> {
	        
	        private Node current = first;

	        public boolean hasNext() {
	            return current != null;
	        }

	       
	        public void remove() {
	            throw new UnsupportedOperationException();
	        }

	    
	        public Item next() {
	            if (!hasNext()) {
	                throw new NoSuchElementException();
	            }
	            Item item = current.item;
	            current = current.next;
	            return item;
	        }
	    }

	    
	    public Iterator<Item> iterator()  {
	        return new ListIterator();
	    }
	    
	   // return an iterator over items in order from front to end
	   public static void main(String[] args){
		   // unit testing (optional)
	   }
	}
	
/*	 private Node first=null, last=null;

	
	 private class Node
	 {
	 String item;
	 Node next;
	 }

	 public boolean isEmpty()
	 { return first == null; }

	 public void enqueue(String item)
	 {
	 Node oldlast = last;
	 last = new Node();
	 last.item = item;
	 last.next = null;
	 if (isEmpty()) first = last;
	 else oldlast.next = last;
	 }

	 public String dequeue()
	 {
	 String item = first.item;
	 first = first.next;
	 if (isEmpty()) last = null;
	 return item;
	 }
	
}
*/