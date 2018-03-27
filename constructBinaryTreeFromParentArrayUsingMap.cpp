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
    map<int,struct Node*>mp;
    int i;
    for(i=0;i<n;i++)
    {
        if(mp.count(i)==0)
        {
          //  cout<<i<<endl;
            newnode=(struct Node*)malloc(sizeof(struct Node));
             newnode->data=i;
            newnode->left=NULL;
            newnode->right=NULL;
             mp[i]=newnode;
            
        }
        
        if(parent[i]==-1)
        head=mp[i];
        else
        {
            if(mp.count(parent[i])!=0)
            {
                ptr=mp[parent[i]];
                if(ptr->left==NULL)
                   ptr->left=mp[i];
               else
                  ptr->right=mp[i];
            }
            else
            {
                 newnode1=(struct Node*)malloc(sizeof(struct Node));
                 newnode1->data=parent[i];
                 newnode1->left=mp[i];
                 newnode1->right=NULL;
                 mp[parent[i]]=newnode1;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
            }
            
        }
    }
 //  cout<<mp[1]->right->data<<endl;
    return head;
}
