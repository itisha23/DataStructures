struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// Your task is to complete this function
// function shoudl return the required sum
int minLeafSum(Node* root)
{
    if(root==NULL)
    return 0;
    int sum=0,flag=0,n;
    Node *x;
     queue<Node*>q;
     q.push(root);
     while(q.empty()!=1)
     {
         n=q.size();
         while(n--)
         {
             x=q.front();
             q.pop();
             if(x->left==NULL && x->right==NULL)
             {
                 sum=sum+x->data;
                 flag=1;
             }
             if(x->left!=NULL)
             q.push(x->left);
             if(x->right!=NULL)
             q.push(x->right);
         }
         if(flag==1)
         break;
     
     }
     
     return sum;
}
