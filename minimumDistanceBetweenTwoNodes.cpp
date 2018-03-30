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
/* Should return minimum distance between a and b 
   in a tree with given root*/
int path(Node*root,vector<Node*>&arr,int n)
{
    if(root==NULL)
    return 0;
    arr.push_back(root);
    if(root->data==n)
    return 1;
    if((root->left&&path(root->left,arr,n))||(root->right&&path(root->right,arr,n)))
    return 1;
    arr.pop_back();
    return 0;
}
int findDist(Node* root, int a, int b)
{
    int i,count=0,ans,ispresent1,ispresent2,dist1,dist2;
     if(root==NULL)
     return 0;
    vector<Node*>path1;
    vector<Node*>path2;
    ispresent1=path(root,path1,a);
    ispresent2=path(root,path2,b);
    if(ispresent1==false||ispresent2==false)
    return 0;
    dist1=path1.size();
    dist2=path2.size();
    for(i=0;i<path1.size()&& i<path2.size();i++)
    {
        if(path1[i]==path2[i])
        count++;
        else
        break;
    }
    ans=dist1+dist2-2*count;
    return ans;
}
