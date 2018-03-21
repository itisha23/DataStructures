/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Node structure
struct Node
{
    int data;
    struct Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
   // Your Code here
   if(head==NULL)
   return head;
   if(head->next==NULL)
   return head;
   struct Node *odd,*even,*head2;
   odd=head;
   even=head->next;
   head2=head->next;
   while(even!=NULL && even->next!=NULL)
   {
       odd->next=even->next;
       even->next=odd->next->next;
       odd=odd->next;
       even=even->next;
   }
   odd->next=head2;
   return head;
}
