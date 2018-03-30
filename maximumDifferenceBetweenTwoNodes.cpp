/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Your are required to 
complete this method*/
int func(Node *root,int &ans)
{
    int mini;
    if(root==NULL)
      return INT_MAX;
    mini=min(func(root->left,ans),func(root->right,ans));
    ans=max(ans,root->data-mini);
    if(root->data<mini)
    mini=root->data;
    return mini;
}



int maxDiff(Node* root)
{
    int ans=INT_MIN,mini;
    mini=func(root,ans);
    return ans;
}

