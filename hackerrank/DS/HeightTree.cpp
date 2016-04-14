
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    if(root)
        {
          int left = height(root->left);
          int right = height(root->right);
              
          if( left > right)
              {
              return 1 + left;
          }
          else
              return 1 + right;       
    }
    else
        return -1;
}
  
