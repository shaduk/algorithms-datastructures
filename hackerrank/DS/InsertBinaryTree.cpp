/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    if(root == NULL)
        {
        node* newnode = new node();
        newnode->data = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    else if(value > root->data)
        {
        root->right = insert(root->right, value);
    }
    else
        {
        root->left = insert(root->left, value);
    }

   return root;
}
