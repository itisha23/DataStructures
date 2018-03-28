/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*  the node structure is as follows 
struct Node
{
int data;
Node* next;
Node* arb;
};*/
// Should return the head of the copied linked list the 
//output will be 1 if successfully copied
Node * copyList(Node *head)
{
    int val;
    if(head==NULL)
    return NULL;
    Node *ptr1,*ptr2,*head2=NULL,*prev=NULL,*ptr3;
    ptr1=head;
    map<int,Node*>m;
    while(ptr1!=NULL)
    {
        Node *newnode=(Node*)malloc(sizeof(struct Node));
        newnode->data=ptr1->data;
        m[ptr1->data]=newnode;
        newnode->next=NULL;
        newnode->arb=NULL;
        if(prev==NULL)
        {
               head2=newnode;
               prev=newnode;
        }
     
        else
        {
            prev->next=newnode;
            prev=newnode;
        }
        ptr1=ptr1->next;
    }
    
    ptr1=head;
    ptr2=head2;
    while(ptr1!=NULL)
    {
        if(ptr1->arb!=NULL)
        {
            val=ptr1->arb->data;
            ptr3=m[val];
            ptr2->arb=ptr3;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
     }
    return head2;
    
}
