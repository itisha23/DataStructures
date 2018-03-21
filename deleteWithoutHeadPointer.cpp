/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list node 
struct Node
{
    int data;
    Node* next;
}*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
   // Your code here
   Node *ptr,*prev;
   ptr=node;
   while(ptr->next!=NULL)
   {
       ptr->data=ptr->next->data;
       prev=ptr;
       ptr=ptr->next;
   }
   prev->next=NULL;
}
