/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
    
    stack<TreeNode*>st;
    set<TreeNode*>se;
    
    TreeNode* curr;
    curr=root;
    vector<int>ans;
    
    while(1)
    {
        while(curr!=NULL)
        {
            ans.push_back(curr->val);
            st.push(curr);
             se.insert(curr);
            curr=curr->left;
           
        }
        if(st.empty()!=1)
        {
            curr=st.top();
            if(curr->right==NULL||(curr->right!=NULL && se.find(curr->right)!=se.end()))
            {
                st.pop();
                curr=NULL;
            }
            else
            curr=curr->right;
        }
        else
        break;
        
    }
   return ans; 
}
