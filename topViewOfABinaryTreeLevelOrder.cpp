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


void topView(struct Node *node)
{
    if(node==NULL)
    return;
    struct Node *ptr;
    queue<pair<struct Node *,int> >q;
    q.push(make_pair(node,0));
    set<int>s;
    while(q.empty()!=1)
    {
        int a=q.front().second;
        ptr=q.front().first;
        //cout<<ptr->data<<" ";
        if(s.find(a)==s.end())
        {
            cout<<ptr->data<<" ";
            s.insert(a);
        }
        q.pop();
        if(ptr->left!=NULL)
        q.push(make_pair(ptr->left,a-1));
         if(ptr->right!=NULL)
        q.push(make_pair(ptr->right,a+1));
}
}
