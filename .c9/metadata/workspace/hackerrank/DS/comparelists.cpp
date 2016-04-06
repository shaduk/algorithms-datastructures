{"filter":false,"title":"comparelists.cpp","tooltip":"/hackerrank/DS/comparelists.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":17,"column":0},"action":"insert","lines":["/*","  Compare two linked lists A and B","  Return 1 if they are identical and 0 if they are not. ","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","int CompareLists(Node *headA, Node* headB)","{","    if(headA == NULL && headB == NULL) return 1;","    if(headA == NULL || headB == NULL) return 0;","    if(headA->data != headB->data) return 0;","    return CompareLists(headA->next, headB->next);","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":9,"column":2},"end":{"row":9,"column":2},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1459968388710,"hash":"417e017536f65212ec2ffad98165cdea00631210"}