/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node structure
struct Node {
    int data;
    Node* left, * right;
}; */
// This function should return tree if passed  tree 
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree
pair<bool,int> func(Node *node)
{
    if(node==NULL)
    {
        return make_pair(true,0);
    }
    pair<bool,int>p1,p2;
    p1=func(node->left);
    p2=func(node->right);
    int lh=p1.second;
    int rh=p2.second;
    int h=max(lh,rh)+1;
    bool val1=p1.first;
    bool val2=p2.first;
   //cout<<val1<<" "<<val2<<endl;
    if(abs(lh-rh)<=1 && val1 && val2 )
    {
        //if(h==2)
        //cout<<"hi";
        return make_pair(true,h);
    }
    else
     return make_pair(false,h);
}

bool isBalanced(Node *root)
{
    //  Your Code here
    pair<bool,int>p;
    p=func(root);
    return p.first;
}

