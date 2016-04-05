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
    if(head == NULL)
     {
        Node *temp = head;
        Node* temp3 = new Node();
        temp3->data = data;
        temp3->next = NULL;
        temp = temp3;
        return temp;
    }
    else
    {
        Node* temp1;
        temp1 = head;
        Node* temp2 = new Node();
        temp2->data = data;
        temp2->next = NULL;
        while(temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp2;
            return head;
    }
}
