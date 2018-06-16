bool isFullTree (struct Node* root)
{
    struct Node *ptr;
    if(root==NULL)
    return true;
   queue<Node*>q;
   q.push(root);
   while(q.empty()!=1)
   {
       ptr=q.front();
       q.pop();
       if((ptr->left==NULL && ptr->right!=NULL) ||(ptr->left!=NULL&& ptr->right==NULL))
          return false;
        if(ptr->left!=NULL)
         {
             q.push(ptr->left);
             q.push(ptr->right);
         }
   }
   return true;
}
