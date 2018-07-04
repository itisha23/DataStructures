int func(TreeNode *node,int tar,int sum)
{
    if(node==NULL)
      return 0;
    if(node->left==NULL && node->right==NULL)
    {
        sum=sum+node->val;
        if(sum==tar)
        return 1;
        else
        return 0;
    }
    return func(node->left,tar,sum+node->val)| func(node->right,tar,sum+node->val); 
}
int Solution::hasPathSum(TreeNode* node, int tar) {
    
    return func(node,tar,0);
}

