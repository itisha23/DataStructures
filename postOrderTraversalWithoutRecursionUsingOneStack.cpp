/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* root) {
    
    TreeNode *curr,*prev;
    vector<int>ans;
    stack<TreeNode*>st;
    set<TreeNode*>se;
    curr=root;
    while(1)
    {
      while(curr!=NULL)
        {
            st.push(curr);
            curr=curr->left;
        }
        if(st.empty()!=1)
        {
            curr=st.top();
            if(curr->right==NULL ||(curr->right==prev))
            {
                ans.push_back(curr->val);
               
                st.pop();
                se.insert(curr);
                 prev=curr;
                curr=NULL;
               
            }
           else
            
          //  if(curr->right!=NULL && se.find(curr->right))
            curr=curr->right;
        }
        else
        break;
        
    }
    return ans;
}
