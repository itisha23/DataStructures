/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method*/
Node * deleteK(Node *head,int K)
{
  //Your code here
  int count;
  if(K==1)
  return NULL;
  Node *ptr,*prev;
  ptr=head;
  count=0;
  while(ptr!=NULL)
  {
    count++;
    if(count%K==0)
    {
        prev->next=ptr->next;
        prev=prev;
        ptr=ptr->next;
        continue;
    }
    prev=ptr;
    ptr=ptr->next;
  }
  return head;
}
