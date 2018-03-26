/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
Node* reverse(Node *head)
{
    Node*ptr1,*ptr2,*ptr3;
    ptr1=head;
    ptr2=head->next;
    while(ptr2!=NULL)
    {
        ptr3=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr3;
    }
    head->next=NULL;
    head=ptr1;
    return head;
    
}
Node *compute(Node *head)
{
     struct Node *ptr,*maxi,*ptr2,*prev;
     ptr=head;
     ptr=reverse(ptr);
     prev=ptr;
     ptr2=ptr->next;
     maxi=ptr;
     while(ptr2!=NULL)
     {
        if(ptr2->data<maxi->data)
        {
            prev->next=ptr2->next;
           // if(prev==head)
           // head=ptr2;
           ptr2=ptr2->next;
           prev=prev;
        }
        else if(ptr2->data>=maxi->data)
        {
            maxi=ptr2;
            prev=ptr2;
            ptr2=ptr2->next;
        }
     }
     head=reverse(ptr);
     return head;
     
}
