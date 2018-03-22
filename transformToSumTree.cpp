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
// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int func(struct Node*node)
{
    if(node == NULL)
       return 0;
    int lh=func(node ->left);
    int rh=func(node->right);
    int sum=lh+rh;
    int a=node->data;
    node->data=sum;
    return (a+sum);   

} 
void toSumTree(Node *node)
{
    // Your code her
    int a=func(node);
}

  
