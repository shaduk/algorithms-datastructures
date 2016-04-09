/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *temp = head;
    int len = 0;
    while(temp->next != NULL)
        {
        len++;
        temp = temp->next;
    }
    
    temp = head;
    for(int i = 0; i < len-positionFromTail; i++)
        {
        temp = temp->next;
    }
    return temp->data;
}
