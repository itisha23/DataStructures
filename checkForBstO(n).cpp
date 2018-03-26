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
   
void func(Node *root,int &flag,int &prev)
{
    if(root==NULL)
    return;
    func(root->left,flag,prev);
    if(root->data<prev)
    flag=1;
    prev=root->data;
    func(root->right,flag,prev);
}


bool isBST(Node* root) {
   int flag=0,prev=INT_MIN;
   func(root,flag,prev);
   if(flag==0)
   return true;
   else
   return false;
}  

