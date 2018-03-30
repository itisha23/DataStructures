/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of Link list node is as follows 
struct node
{
    int data;
    struct node* next;
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/
/*You are required to complete this method*/
void convert(node *head,TreeNode * &root)
{
    int i;
    if(head==NULL)
      return;
    map<int,TreeNode*>m;
    node *ptr;
    TreeNode *paptr;
    ptr=head;
    i=0;
    while(ptr!=NULL)
    {
        struct TreeNode *newnode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        newnode->data=ptr->data;
        newnode->left=NULL;
        newnode->right=NULL;
        m[i]=newnode;
        if(i==0)
        root=newnode;
        else
        {
            paptr=m[i/2];
            if(paptr->left==NULL)
            paptr->left=newnode;
            else
            paptr->right=newnode;
        }
        i++;
        ptr=ptr->next;
    }
    
}
