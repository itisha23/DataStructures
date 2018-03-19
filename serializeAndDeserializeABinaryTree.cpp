/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/*this  function serializes 
the binary tree and stores 
it in the vector A*/
void serialize(Node *root,vector<int> &A)
{
    //Your code here  // If current node is NULL, store marker
    if (root == NULL)
    {
        A.push_back(-1);
        return;
    }
 
    // Else, store current node and recur for its children
   // fprintf(fp, "%d ", root->key);
     A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}
/*this function deserializes
 the serialized vector A*/
 Node *func(vector<int> &A,int &i)
{
    struct Node *node;
    if(i==0)
    {
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=A[i];
        node=newnode;
    }
    if(A[i]==-1)
    return NULL;
    if(A[i]!=-1 && i!=0)
    {
         struct Node* newnode=(struct Node *)malloc(sizeof(struct Node));
        newnode->data=A[i];
        node=newnode;
    }
    i++;
    node->left=func(A,i);
    i++;
    node->right=func(A,i);
    return node;
}
Node * deSerialize(vector<int> &A)
{
   //Your code hereint val;
   struct Node *head;
   int i=0;
   head=func(A,i);
   return head;
}

