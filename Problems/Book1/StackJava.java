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

class Stack<T>
{
    private class Node
    {
        private T item;
        private Node next;
    }
    private int size;
    private Node first = new Node();
    
    public Stack(T val)
    {
        first.item = val;
        first.next = null;
    }
    
    public void push(T value)
    {
        Node newNode = new Node();
        newNode.item = value;
        newNode.next = first;
        first = newNode;
    }
    
    public void pop()
    {
        first = first.next;
    }
    
    public T top()
    {
        if(first != null)
            return first.item;
        else
            throw new NoSuchElementException();
    }
}
	
public class StackJava {

	public static void main(String[] args)
    {
       Stack<Integer> s = new Stack<>(5);
       s.push(6);
       s.push(7);
       s.push(8);
       System.out.println(s.top());
       s.pop();
       System.out.println(s.top());
       s.pop();
       System.out.println(s.top());
       s.pop();
       System.out.println(s.top());
       s.pop();
       s.pop();
    }
}