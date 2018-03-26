/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */
   
void func1(Node *root,int &maxi)
{
    if(root==NULL)
    return;
    func1(root->left,maxi);
    if(root->data>maxi)
    maxi=root->data;
    func1(root->right,maxi);
    
}
int maxvalue(Node *root)
{
    int maxi=INT_MIN;
    func1(root,maxi);
    return maxi;
}
void func2(Node *root,int &mini)
{
    if(root==NULL)
    return;
    func2(root->left,mini);
    if(root->data<mini)
    mini=root->data;
    func2(root->right,mini);
    
}
int minvalue(Node *root)
{
    int mini=INT_MAX;
    func2(root,mini);
    return mini;
}


bool isBST(Node* root) {
    // Your code here
    if(root==NULL)
    return true;
    if(root->left!=NULL && maxvalue(root->left)>root->data)
    return false;
    if(root->right!=NULL && minvalue(root->right)<root->data)
    return false;
    if(!isBST(root->left) || !isBST(root->right))
    return false;
    return true;
}  

