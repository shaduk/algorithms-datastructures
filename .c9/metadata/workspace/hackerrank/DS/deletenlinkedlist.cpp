{"filter":false,"title":"deletenlinkedlist.cpp","tooltip":"/hackerrank/DS/deletenlinkedlist.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":25,"column":0},"action":"insert","lines":["/*","  Delete Node at a given position in a linked list ","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","Node* Delete(Node *head, int position)","{","    Node* temp = head;","    if(position == 0)","        {","        head = head->next;","        return head;","    }","    ","    for(int i = 1; i <= position-1; i++)","        {","        temp = temp->next;","    }","    temp->next = (temp->next)->next;","    return head;","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":25,"column":0},"end":{"row":25,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1459953285572,"hash":"d1485bb49de5637b1922008c3fe4bd2210420678"}