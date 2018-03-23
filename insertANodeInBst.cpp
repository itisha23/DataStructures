/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of a BST node is as follows:
struct node {
  int data;
  struct node * right, * left;
}; */
/* This function should insert a new node with given data and
   return root of the modified tree  */
struct node* insert(struct node* node, int data)
{
    // Your code here
    if(node==NULL)
    {
        struct node * newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->left=NULL;
        newnode->right=NULL;
       // count++;
        node=newnode;
        return newnode;
    }
    if(data>node->data)
    {
        node->right=insert( node->right,data);
        return  node;
    }
    else if(data<node->data)
    {
        node->left=insert( node->left,data);
        return  node;
    }
    return node;
}
