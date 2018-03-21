/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
int height(struct Node*node)
{
    if(node==NULL)
    return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    return max(lh,rh)+1;
}
void printgivenlevel(Node *node,int level,int &count)
{
    if(node==NULL)
    return;
    else if(level==1)
    {
        count++;
        if(count==1)
        cout<<node->data<<" ";
        // x=node->data;
    }
       // x=node->data;
    else
    {
         printgivenlevel(node->left,level-1,count);
         printgivenlevel(node->right,level-1,count);
    }
 }
void leftView(Node *root)
{
   // Your code here
    int i,x;
   int levels=height(root);
  // cout<<root->data<<" ";
   for(i=1;i<=levels;i++)
   {
       int count=0;
       printgivenlevel(root,i,count);
       //cout<<x<<" ";
   }
}
