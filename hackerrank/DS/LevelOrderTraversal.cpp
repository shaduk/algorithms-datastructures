#include <queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    if(root == NULL) return;
    queue<node*> myq;
    myq.push(root);
    while(!myq.empty())
    {
        node* current = myq.front();
        cout << current->data << " ";
        if(current->left) myq.push(current->left);
        if(current->right) myq.push(current->right);
        myq.pop();
    }
}
