/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
      Node* temp = new Node();
      temp->data = data;
      temp->next = NULL;
    
    if(head == NULL)
     {
        head = temp;
        return head;
    }
    else
    {
        Node* temp1 = head;
        while(temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
        return head;
    }
}
