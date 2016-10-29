import java.util.ArrayList;
import java.util.*;

class Node

{
    
      private int id;
      private final List<Node> children = new ArrayList<>();

      private final Node parent;
      
      public Node(Node parent)
      {
          this.parent = parent;
      }
      
      public Node getParent()
      {
          return this.parent;
      }
      
      public void setId(int id)
      {
          this.id = id;
      }
      
      public List<Node> getChildren()
      {
          return this.children;
      }
      
      public int getId()
      {
          return this.id;
      }
      
}

	
public class Algo2 {


	
	public static void main(String[] args)
    {
		// int parent[] = {0,1,1,1,2,5,5,5,4,4};
		int parent[] = {0,1,1,1,2,5,6,6,4,4};
		Boolean[] set = new Boolean[parent.length+1];
        Arrays.fill(set, Boolean.FALSE);
        
		Node node[] = new Node[parent.length + 1];
		node[0] = null;
		for(int i = 0; i < parent.length; i++)
		{
			node[i+1] = new Node(node[parent[i]]);
			node[i+1].setId(i+1);
			if(node[parent[i]] != null)
				node[parent[i]].getChildren().add(node[i+1]);
		}
		
        
		
		for(int i = 1; i <= parent.length; i++)
		{
			if(node[i]!= null)
			{
			    if(node[i].getParent() == null)
			    	set[i] = false;
			    else if(node[i].getChildren().isEmpty())
			    {
			    	set[i] = true;
			        set[node[i].getParent().getId()] = false;
			    }
			    else
			    {
			    	set[i] = !set[node[i].getParent().getId()];
			    }
			}
		}
		
		for(int i = 1; i <= parent.length; i++)
		{
		       if(set[i])
		            System.out.print(i+ " ");
		}
		System.out.println();
    	
    }
}