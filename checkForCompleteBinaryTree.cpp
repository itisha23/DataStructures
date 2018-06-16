#include<bits/stdc++.h>
using namespace std;
bool isCompleteBT(struct node* root)
{
    int flag=0;
    struct node* ptr;
   queue<struct node*>q;
   q.push(root);
   while(q.empty()!=1)
   {
     
       int n=q.size();
       ptr=q.front();
        q.pop();
       if(ptr->left==NULL && ptr->right==NULL&& flag==0)
        {
          flag=1;
        }
       else if(flag==1)
        {
          if(ptr->left!=NULL || ptr->right !=NULL)
           {
            return false;
           }
        }
       else if(ptr->left==NULL && ptr->right!=NULL)
       return false;
        if(ptr->left!=NULL)
        q.push(ptr->left);
        if(ptr->right!=NULL)
         q.push(ptr->right);
   }
   return true;
}
