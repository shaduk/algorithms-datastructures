{"filter":false,"title":"LevelOrderTraversal.cpp","tooltip":"/hackerrank/DS/LevelOrderTraversal.cpp","ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":23,"column":0},"end":{"row":23,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"hash":"7686ddf4857217b5c2f81237b5542a7516a22a9e","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":23,"column":0},"action":"insert","lines":["#include <queue>","/*","struct node","{","    int data;","    node* left;","    node* right;","}*/","","void LevelOrder(node * root)","{","    if(root == NULL) return;","    queue<node*> myq;","    myq.push(root);","    while(!myq.empty())","    {","        node* current = myq.front();","        cout << current->data << \" \";","        if(current->left) myq.push(current->left);","        if(current->right) myq.push(current->right);","        myq.pop();","    }","}",""],"id":1}]]},"timestamp":1460614379000}