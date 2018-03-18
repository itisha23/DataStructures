/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */
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
bool isPalindrome(Node *head)
{
    int flag=0,count=0,n,a;
    Node *ptr1,*ptr2;
    ptr1=head;
    while(ptr1!=NULL)
    {
        count++;
        ptr1=ptr1->next;
    }
    if(count==1)
    {
        return true;
    }
    else
    {
          if(count%2==0)
     n=count/2;
     else
     n=count/2+1;
     ptr2=head;
     a=count/2;
     while(n--)
     {
         ptr2=ptr2->next;
     }
     ptr2=reverse(ptr2);
     ptr1=head;
     while(a--)
     {
         if(ptr1->data==ptr2->data)
         {
             ptr1=ptr1->next;
             ptr2=ptr2->next;
         }
         else
         {
             flag=1;
             break;
         }
     }
     if(flag)
     return false;
     else
     return true;
    }
   
}
