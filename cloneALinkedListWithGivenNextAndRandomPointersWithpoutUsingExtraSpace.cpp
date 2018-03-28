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
    Node *ptr1,*ptr2,*head2=NULL,*prev=NULL,*ptr3,*temp;
    ptr1=head;
   while(ptr1!=NULL)
   {
       Node *newnode=(Node*)malloc(sizeof(struct Node));
       newnode->data=ptr1->data;
       newnode->arb=NULL;
       temp=ptr1->next;
       newnode->next=temp;
       ptr1->next=newnode;
       ptr1=newnode->next;
       if(head2==NULL)
       head2=newnode;
    }
  
 
    
    ptr1=head;ptr2=head2;
    while(1)
    {
        if(ptr1->arb!=NULL)
        {
            ptr2->arb=ptr1->arb->next;
        }
        if(ptr2->next==NULL)
          break;
        ptr1=ptr1->next->next;
        ptr2=ptr2->next->next;
        
    }
    ptr1=head;
    /*while(ptr1!=NULL)
    {
        cout<<ptr1->data<<endl;
        ptr1=ptr1->next;
    }*/
    ptr2=head2;
    
    while(1)
    {
        ptr1->next=ptr2->next;
        ptr1=ptr1->next;
        if(ptr1==NULL)
        break;
        ptr2->next=ptr1->next;
        ptr2=ptr2->next;
        
    }
    return head2;
    
}
