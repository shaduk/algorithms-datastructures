{"filter":false,"title":"HeightTree.cpp","tooltip":"/hackerrank/DS/HeightTree.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":30,"column":0},"action":"insert","lines":["","/*The tree node has data, left child and right child ","struct node","{","    int data;","    node* left;","    node* right;","};","","*/","int height(node * root)","{","    ","    if(root)","        {","        ","          int left = height(root->left);","          int right = height(root->right);","              ","          if( left > right)","              {","              return 1 + left;","          }","          else","              return 1 + right;       ","    }","    else","        return -1;","}","  ",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":30,"column":0},"end":{"row":30,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1460543709535,"hash":"fb824345114c93e90b43031569e7464056fe4af7"}