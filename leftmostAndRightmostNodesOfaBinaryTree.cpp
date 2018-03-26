/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Function to print corner node at each level */
void printCorner(Node *root)
{
   if(root==NULL)
     return;
    queue<struct Node*>q;
    q.push(root);
    struct Node*ptr;
    while(q.empty()!=1)
    {
        int n=q.size();
        int count=1;
        int a=n;
        while(n--)
        {
            ptr=q.front();
            if(count==1||count==a)
            cout<<ptr->key<<" ";
            q.pop();
            if(ptr->left)
            q.push(ptr->left);
            if(ptr->right)
            q.push(ptr->right);
            count++;
            
        }
    }
}
