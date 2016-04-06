/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    
    if(position == 0)
        {
        temp1->next = head;
        head = temp1;
        return head;
    }
    Node* temp2= head;
    
    for(int i = 1; i <= position-1; i++)
        {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
}
