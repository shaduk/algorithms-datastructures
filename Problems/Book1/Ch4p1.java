import java.util.ArrayList;
import java.util.*;


class LinkedList<T> 
{
    private T value;
    private LinkedList<T> next = null;
    
    public LinkedList(T value)
    {
        this.value = value;
    }
    
    public T getVal()
    {
        return value;
    }
    
    public LinkedList<T> getNext()
    {
        return next;
    }
    
    public void setVal(T newVal)
    {
        this.value = newVal;
    }
    
    public void setNext(LinkedList<T> newNext)
    {
        this.next = newNext;
    }
}
	
public class Ch4p1 {

	public static void main(String[] args)
    {
        LinkedList<Integer> l1 = new LinkedList<>(5);
        LinkedList<Integer> l2 = new LinkedList<>(6);
        LinkedList<Integer> l3 = new LinkedList<>(7);
        LinkedList<Integer> l4 = new LinkedList<>(8);
        l1.setNext(l2);
        l2.setNext(l3);
        l3.setNext(l4);
        LinkedList<Integer> head = l1;
        while(head != null)
        {
            System.out.println(head.getVal());
            head = head.getNext();
        }
    }
}