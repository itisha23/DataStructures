/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of a BST Node is as follows:
struct Node {
  int data;
  Node * right, * left;
};*/
/*Node *search(Node *root,int x,Node **prev_ptr)
{
    Node *ptr;
    if(root->data==x)
    {
       cout<<(*prev_ptr)->data<<endl;
        return root;
    }
    else  if(x>root->data)
    ptr=search(root->right,x,&root);
    else if(x<root->data)
    ptr=search(root->left,x,&root);
    return ptr;
}
Node * deleteNode(Node *root,int x)
{
    if(root==NULL)
    return NULL;
    Node *prev,*ptr;
    prev=root;
    ptr=search(root,x,&prev);
    cout<<prev->data<<endl;
    cout<<ptr->data<<endl;
    return root;
}*/

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of a BST Node is as follows:
struct Node {
  int data;
  Node * right, * left;
}; */
Node *search(Node *root,int x,Node *&prev)
{
    int cou,copy;
    Node *ptr;
    if(root->data==x)
    {
     // cout<<prev->data<<endl;
        return root;
    }
    else  if(x>root->data)
    {
        prev=root;
         ptr=search(root->right,x,prev);
        
    }
   
    else if(x<root->data)
    {
        prev=root;
         ptr=search(root->left,x,prev);
    }
   
   
    return ptr;
}
void func(Node *root,int *cou_ptr,int *copy_ptr)
{
    if(root==NULL)
    return;
    func(root->left,cou_ptr,copy_ptr);
    (*cou_ptr)++;
    //cout<<*cou_ptr<<endl;
    if(*cou_ptr==1)
    {
      //  cout<<root->data<<endl;
        *copy_ptr=root->data;
       
    }
    if(*cou_ptr<1);
    func(root->right,cou_ptr,copy_ptr);
}/*
void func(Node *root,int &cou)
{
    if(root==NULL)
    return;
    func(root->left,cou);
    cou++;
    if(cou==1)
    {
      //  copy=root->data;
       
    } 
    func(root->right,cou);
}*/

 
Node * deleteNode(Node *root,int x)
{
    int cou=0,copy=0;
    if(root==NULL)
    return NULL;
    Node *prev,*ptr;
    prev=root;
    ptr=search(root,x,prev);
  //  cout<<prev->data<<endl;
  // cout<<ptr->data<<endl;
    if(ptr->left==NULL && ptr->right==NULL && prev==root && prev->data==x)
        root=NULL;
    else if(ptr->left==NULL && ptr->right==NULL)
        {
            
           if(prev->left==ptr)
                prev->left=NULL;
            else
                prev->right=NULL;
        }
    else if(ptr->left== NULL && ptr->right!=NULL)
        {
            
           if(ptr==root && prev==root)
                root=ptr->right;
           else if(prev->right==ptr)
            prev->right=ptr->right;
            else
            prev->left=ptr->right;
        }
     else if(ptr->right== NULL && ptr->left!=NULL)
        {
            if(ptr==root && prev==root)
                root=ptr->left;
          else if(prev->right==ptr)
            prev->right=ptr->left;
            else
            prev->left=ptr->left;
        }
     else if(ptr->left!=NULL && ptr->right!=NULL)
     {
       //cout<<ptr->right->data<<endl;
         func(ptr->right,&cou,&copy);
        // cout<<copy;
          ptr->data=copy;
          prev=ptr;
          ptr->right=deleteNode(ptr->right,copy);
         
     }
          
    return root;
}

