/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
/* Function to print nodes of extreme corners
of each level in alternate order */
void printExtremeNodes(Node* root)
{
    int flag,a,cou;
    Node *ptr;
   if(root==NULL)
    return;
   queue<Node*>q;
   q.push(root);
   flag=0;
   while(q.empty()!=1)
   {
       int n=q.size();
       a=n;
       cou=0;
      // flag=0;
       while(n--)
       {
           ptr=q.front();
           q.pop();
           cou++;
           if(cou==1 && flag==1)
             cout<<ptr->data<<" ";
           if(cou==a && flag==0)
              cout<<ptr->data<<" ";
          if(ptr->left)
           q.push(ptr->left);
          if(ptr->right)
           q.push(ptr->right);
           
       }
       flag=!flag;
   }
}
