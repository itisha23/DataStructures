/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connect(Node *p)
{
  if(p==NULL)
  return;
  struct Node*ptr,*ptr2;
  int a,cou;
  queue<struct Node *>q;
  q.push(p);
  while(q.size()!=0)
  {
     int n=q.size();
     a=n;
     cou=0;
     while(n--)
     {
         cou++;
         ptr=q.front();
         q.pop();
         if(cou==a)
         ptr2=NULL;
         else
         ptr2=q.front();
         if(ptr->left)
         q.push(ptr->left);
         if(ptr->right)
         q.push(ptr->right);
         ptr->nextRight=ptr2;
         
         
     }
  }
}
