void connect(Node *root)
{
    if(root==NULL)
    return;
   queue<Node*>q;
   q.push(root);
   int n;
   Node *prev,*x;
   
   while(q.empty()!=1)
   {
       prev=NULL;
       n=q.size();
       while(n--)
       {
           x=q.front();
           x->nextRight=NULL;
           q.pop();
           if(prev)
           prev->nextRight=x;
           prev=x;
           if(x->left)
           q.push(x->left);
           if(x->right)
           q.push(x->right);
       }
   }
}
