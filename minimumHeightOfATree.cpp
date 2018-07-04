/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void func(TreeNode *node,int &ans,int count)
 {
     if(node==NULL)
      return;
     if(node->left==NULL && node->right==NULL)
     {
         ans=min(ans,count+1);
         //cout<<ans<<endl;
         return;
     }
     func(node->left,ans,count+1);
     func(node->right,ans,count+1);
 }
int Solution::minDepth(TreeNode* node) {
    
    if(node==NULL)
     return 0;
    
    int ans=INT_MAX;
    func(node,ans,0);
    return ans;
}
