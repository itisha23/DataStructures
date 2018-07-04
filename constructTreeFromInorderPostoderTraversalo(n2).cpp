/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

int getindex(vector<int>&in, int key)
{
    for(int i=0;i<in.size();i++)
    if(in[i]==key)
       return i;
}

TreeNode* func(vector<int>&in,vector<int>&post,int i,int j,int &count,map<int,int>mp)
{
    if(i>j)
    return NULL;
     int value=post[count--];
    int ind=mp[value];
   
   // cout<<i<<" "<<j<<" "<<ind<<endl;
    TreeNode *newnode=(TreeNode*)malloc(sizeof(TreeNode));
    newnode->val=value;
    
    newnode->right=func(in,post,ind+1,j,count,mp);
    newnode->left=func(in,post,i,ind-1,count,mp);
    
    return newnode;
}
TreeNode* Solution::buildTree(vector<int> &in, vector<int> &post) {
    
    int count=in.size()-1;
    map<int,int>mp;
    for(int i=0;i<=count;i++)
    mp[in[i]]=i;
    return func(in,post,0,in.size()-1,count,mp);
}
