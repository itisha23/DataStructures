/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void reversePrint(Node *root)
{
    //Your code here
    if(root==NULL)
    return;
    queue<struct Node*>q;
    q.push(root);
    stack<struct Node*>s;
    struct Node *ptr;
    while(q.empty()!=1)
    {
        ptr=q.front();
        q.pop();
        s.push(ptr);
        if(ptr->right!=NULL)
        q.push(ptr->right);
        if(ptr->left!=NULL)
        q.push(ptr->left);
        
    }
    while(s.empty()!=1)
    {
        ptr=s.top();
        cout<<ptr->data<<" ";
        s.pop();
    }
}
