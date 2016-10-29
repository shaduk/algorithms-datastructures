import java.util.Stack;

public class Iter {
	public static void main(String args[]) {
		Tree tr1, tr2;
		tr1 = new Tree(100);
		tr1.insert(50);
		tr1.insert(150);
		tr1.insert(25);
		tr1.insert(75);
		tr1.insert(60);
		tr1.insert(55);
		tr1.insert(175);

		tr2 = new Tree(175);
		tr2.insert(100);
		tr2.insert(50);
		tr2.insert(60);
		tr2.insert(55);
		tr2.insert(25);
		tr2.insert(75);


	    System.out.println(tr1.equal(tr2));
	 
	}
}

class Tree {
	public Tree(int n) {
		value = n;
		left = null;
		right = null;
	};

	public void insert(int n) {
		if (value == n)
			return;
		if (value < n)
			if (right == null)
				right = new Tree(n);
			else
				right.insert(n);
		else if (left == null)
			left = new Tree(n);
		else
			left.insert(n);
	}
	
	public boolean equal(Tree t2) {
		 TreeIterator treeit = new TreeIterator(this);
		 TreeIterator treeit2 = new TreeIterator(t2);
		 while(!treeit.done() && !treeit2.done())
		 {
		 
		 	if(treeit.next() != treeit2.next())
		 	{
		 		return false;
		 	} 
		 }
		 if(!treeit.done())
		 {
			return false;
		 }
		 else if(!treeit2.done())
		 {
			return false;
		 }
		 return true;
	}

	protected int value;
	protected Tree left;
	protected Tree right;

}


class TreeIterator {
	 // fill in the definition of TreeIterator
	 Stack<Tree> st;
	 public TreeIterator(Tree tr)
	 {
	 	st = new Stack<Tree>();
	 	while(tr != null)
	 	{
	 		st.push(tr);
	 		tr = tr.left;
	 	}
	 }
	 
	 public boolean done()
	 {
	 	if(st.empty())
	 		return true;
	 	else
	 		return false;
	 }
	 
	 public int next()
	 {
	 	Tree popnode = (Tree)st.pop();
	 	if(popnode.right != null)
	 	{
	 		Tree popnoderight = popnode.right;
	 		while(popnoderight != null)
	 		{
	 			st.push(popnoderight);
	 			popnoderight = popnoderight.left;
	 		}
	 	}
	 	return popnode.value;
	 }
	 
}
