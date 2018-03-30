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
Node *func1(Node *root)
{
    Node *temp;
    if(root==NULL)
      return NULL;
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->data=root->data;
    newnode->left=newnode->right=newnode->random=NULL;
    temp=root->left;
    root->left=newnode;
    newnode->left=temp;
    if(newnode->left!=NULL)
    newnode->left->left=func1(newnode->left);
    if(root->right!=NULL)
    newnode->right=func1(root->right);
    return newnode;
}
void func2(Node *root)
{
    if(root==NULL)
    return;
    func2(root->left->left);
    if(root->random!=NULL)
    root->left->random=root->random->left;
    func2(root->right);
}

void func3(Node *tree,Node *root)
{
    if(tree==NULL)
    return;
    tree->left=tree->left->left;
    if(root->left!=NULL)
    root->left=root->left->left;
    func3(tree->left,root->left);
    func3(tree->right,root->right);
}
Node* cloneTree(Node* tree)
{
    if(tree==NULL)
     return NULL;
     Node *root;
   root=func1(tree);
    func2(tree);
    func3(tree,root);
    return root;
}
