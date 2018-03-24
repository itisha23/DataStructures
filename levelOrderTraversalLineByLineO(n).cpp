/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* node)
{
  //Your code here
  int n;
  struct Node* ptr;
  if(node==NULL)
  return;
  queue<struct Node*>q;
  q.push(node);
  while(q.empty()!=1)
  {
      n=q.size();
      while(n--)
      {
          ptr=q.front();
          q.pop();
          cout<<ptr->data<<" ";
          if(ptr->left!=NULL)
          q.push(ptr->left);
          if(ptr->right!=NULL)
          q.push(ptr->right);
      }
      cout<<"$ ";
  }
}
