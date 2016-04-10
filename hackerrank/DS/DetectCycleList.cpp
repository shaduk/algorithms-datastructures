/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   Node* slow_ptr, *fast_ptr;
   slow_ptr = head;
   fast_ptr = head;
   while(slow_ptr && fast_ptr && fast_ptr->next)
       {
       slow_ptr = slow_ptr->next;
       fast_ptr = fast_ptr->next->next;
       if(slow_ptr == fast_ptr)
       return 1;
   }
    return 0;
}
