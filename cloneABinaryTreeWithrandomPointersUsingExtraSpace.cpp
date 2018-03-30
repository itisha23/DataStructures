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
    Node *random;
};
*/
/* The function should clone the passed tree and return 
   root of the cloned tree */
void func2(Node *tree,map<int,Node*>mp)
{
    Node *ptr1,*ptr2;
    if(tree==NULL)
    return;
    if(tree->random!=NULL)
    {
        ptr1=mp[tree->data];
        ptr2=mp[tree->random->data];
        ptr1->random=ptr2;
    }
    func2(tree->left,mp);
    func2(tree->right,mp);
}

Node *func(Node *tree,map<int,Node*>&mp)
{
    Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=tree->data;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->random=NULL;
    mp[tree->data]=newnode;
    if(tree->left!=NULL)
    newnode->left=func(tree->left,mp);
    if(tree->right)
    newnode->right=func(tree->right,mp);
    return newnode;
    
}
Node* cloneTree(Node* tree)
{
  if(tree==NULL)
    return tree;
  Node *root;
  map<int,Node*>mp;
  root=func(tree,mp);
  func2(tree,mp);
  return root;
  
}

