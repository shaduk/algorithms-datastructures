{"filter":false,"title":"insertendlist.cpp","tooltip":"/hackerrank/DS/insertendlist.cpp","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":36,"column":0},"action":"remove","lines":["/*","  Insert Node at the end of a linked list ","  head pointer input could be NULL as well for empty list","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","Node* Insert(Node *head,int data)","{","    if(head == NULL)","     {","        Node* temp3 = new Node();","        temp3->data = data;","        temp3->next = NULL; ","         ","        Node *temp = head;","        temp = temp3;","        return temp;","    }","    else","    {","        Node* temp2 = new Node();","        temp2->data = data;","        temp2->next = NULL;","        ","        Node* temp1;","        temp1 = head;","        while(temp1->next != NULL)","            temp1 = temp1->next;","        temp1->next = temp2;","            return head;","    }","}",""],"id":24}],[{"start":{"row":0,"column":0},"end":{"row":30,"column":0},"action":"insert","lines":["/*","  Insert Node at the end of a linked list ","  head pointer input could be NULL as well for empty list","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","Node* Insert(Node *head,int data)","{","      Node* temp = new Node();","      temp->data = data;","      temp->next = NULL;","    ","    if(head == NULL)","     {","        head = temp;","        return head;","    }","    else","    {","        Node* temp1 = head;","        while(temp1->next != NULL)","            temp1 = temp1->next;","        temp1->next = temp;","        return head;","    }","}",""],"id":25}]]},"ace":{"folds":[],"scrolltop":141,"scrollleft":0,"selection":{"start":{"row":30,"column":0},"end":{"row":30,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":5,"state":"comment","mode":"ace/mode/c_cpp"}},"timestamp":1459949316400,"hash":"df7002b5385991a7fc91dc7fe2b51ae9689f82f6"}