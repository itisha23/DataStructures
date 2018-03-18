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
Node* reverse(Node *head)
{
  // Your code here
  struct Node *ptr1,*ptr2,*ptr3;
  ptr1=head;
  ptr2=ptr1->next;
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
