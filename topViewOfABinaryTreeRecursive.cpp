/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


//Structure of binary tree
/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// function should print the topView of the binary tree

void func(Node *node,int count,map<int,int>&mp)
{
    if(node==NULL)
    return;
    mp.insert(make_pair(count,node->data));
    func(node->left,count-1,mp);
    func(node->right,count+1,mp);
}
void topView(struct Node *root)
{
    // Your code here
    map<int,int>mp;
    int x=0;
     func(root,x,mp);
     map<int,int>::iterator it;
     for(it=mp.begin();it!=mp.end();it++)
         cout<<it->second<<" ";
}
