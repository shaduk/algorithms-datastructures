/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node* ptrA = headA;
    Node* ptrB = headB;
    int lenA = 0, lenB = 0;
    while(ptrA != NULL)
        {
        lenA++;
        ptrA = ptrA->next;
    }
    
    while(ptrB != NULL)
        {
        lenB++;
        ptrB = ptrB->next;
    }
    
    ptrA = headA;
    ptrB = headB;
    
    //now we adjust either ptrA or ptrB so that they are equally far from the end
    while(lenA > lenB){
        ptrA = ptrA->next;
        lenA--;
    }
    while(lenB > lenA){
        ptrB = ptrB->next;
        lenB--;
    }

    while(ptrA != NULL)
        {
        if (ptrA == ptrB)
            return ptrA->data; //found merge point
        ptrA = ptrA->next;
        ptrB = ptrB->next;
    }
    return 0;
}
