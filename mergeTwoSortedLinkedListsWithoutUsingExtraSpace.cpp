/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node  
struct Node {
    int data;
    Node* next;
}; */
Node* SortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    if(head1==NULL)
    return head2;
    if(head2==NULL)
    return head1;
    struct Node *prev,*temp,*head,*ptr1,*ptr2;
    ptr1=head1;
    ptr2=head2;
   // int count=0;
   if(ptr1->data<=ptr2->data)
   {
       prev=ptr1;
       ptr1=ptr1->next;
       head=head1;
   }
   else if(ptr1->data>ptr2->data)
   {
       temp=ptr2->next;
       ptr2->next=ptr1;
       head=head2;
       ptr2=temp;
       ptr1=head2;
   }
   
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<=ptr2->data)
        {
            prev=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            temp=ptr2->next;
            prev->next=ptr2;
            ptr2->next=ptr1;
            ptr1=ptr2;
            ptr2=temp;
        }
    }
    if(ptr2!=NULL)
    {
        prev->next=ptr2;
    }
    return head;
}
