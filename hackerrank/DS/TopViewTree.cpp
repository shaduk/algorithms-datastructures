#include <stack>
/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
   stack<node*> mystack;
   while(root)
   {
       mystack.push(root);
       root = root->left;
   }
    node* current;
    
    while(!mystack.empty())
        {
        current = mystack.top();
        cout << current->data << " ";
        mystack.pop();
    }
    
    while(current->right)
        {
        cout << current->right->data << " ";
        current = current->right;
    }
}
