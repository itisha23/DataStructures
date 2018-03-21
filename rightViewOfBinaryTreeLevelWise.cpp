/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
// Should print right view of tree
int height(struct Node*node)
{
    if(node==NULL)
    return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    return max(lh,rh)+1;
}
void printgivenlevel(Node *node,int level,int &x)
{
    if(node==NULL)
    return;
    else if(level==1)
        x=node->data;
    else
    {
         printgivenlevel(node->left,level-1,x);
         printgivenlevel(node->right,level-1,x);
    }
   
}
void rightView(Node *root)
{
   int i,x;
   int levels=height(root);
   cout<<root->data<<" ";
   for(i=2;i<=levels;i++)
   {
       printgivenlevel(root,i,x);
       cout<<x<<" ";
   }
   
}
