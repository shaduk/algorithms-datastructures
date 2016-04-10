/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node *temp = head, *prevadd = NULL;
    int prev = -1;
    while(temp->next != NULL)
        {
        if(temp->data == prev)
            {
            prevadd->next = (prevadd->next)->next;
            
        }
        else
        {
            prev = temp->data;
            prevadd = temp;
        }
        
        temp = temp->next;
        
    }
    if(temp->data == prev)
    {
       prevadd->next = (prevadd->next)->next;
    }        
    return head;
}
