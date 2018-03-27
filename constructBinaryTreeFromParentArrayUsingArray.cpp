/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*  Function which returns the  root of 
    the constructed binary tree. */
Node *createTree(int parent[], int n)
{
    struct Node *head=NULL,*newnode,*ptr,*newnode1;
    struct Node *arr[n];
    int i;
    for(i=0;i<n;i++)
       arr[i]=NULL;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==NULL)
        {
            newnode=(struct Node*)malloc(sizeof(struct Node));
             newnode->data=i;
            newnode->left=NULL;
            newnode->right=NULL;
            arr[i]=newnode;
            
        }
        
        if(parent[i]==-1)
        head=arr[i];
        else
        {
            if(arr[parent[i]]!=NULL)
            {
                ptr=arr[parent[i]];
                if(ptr->left==NULL)
                   ptr->left=arr[i];
               else
                  ptr->right=arr[i];
            }
            else
            {
                 newnode1=(struct Node*)malloc(sizeof(struct Node));
                 newnode1->data=parent[i];
                 newnode1->left=arr[i];
                 newnode1->right=NULL;
                 arr[parent[i]]=newnode1;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
            }
            
        }
    }
    return head;
}
