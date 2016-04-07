/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node *list1 = headA;
    Node *list2 = headB;
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    if (list1->data < list2->data) {
    list1->next = MergeLists(list1->next, list2);
    return list1;
  } else {
    list2->next = MergeLists(list2->next, list1);
    return list2;
  }
}
