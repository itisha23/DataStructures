/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


//function Template for C++
/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node * func(struct Node *node1, struct Node *node2 )
{
     //struct Node *head;
    if(node2==NULL)
    return node1;
    struct Node *head;
    if(node2->next==NULL)
    {
        node2->next=node1;
        head=node2;
         return head;
     }
   head=func(node2,node2->next);
     //ptr=node2;
     node2->next=node1;
     return head;
     
}
Node* reverse(Node *head)
{
    if(head==NULL)
    return head;
    struct Node *head2;
     head2=func(head,head->next);
     head->next=NULL;
     head=head2;
}
