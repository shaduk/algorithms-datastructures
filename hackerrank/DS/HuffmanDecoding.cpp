/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

bool isLeaf(node* n)
    {
    if(n->left == NULL && n->right == NULL)
        return true;
    return false;
}

void decode_huff(node * root,string s)
{
    string ans = "";
    node* temp = root;
    for(int i = 0; i < s.length(); i++)
        {
        if(s[i] == '0')
            {
            root = root->left;
        }
        else if(s[i] == '1')
        {
            root = root->right;
        }
        if(isLeaf(root))
        {
            ans = ans + root->data;
            root = temp;
        }
    }
    cout << ans;
}
