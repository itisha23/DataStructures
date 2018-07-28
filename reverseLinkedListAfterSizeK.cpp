*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
/*
  Reverse a linked list
  The input list will have at least one element  
  Return pointer to head of reverse linked list 
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k)
{ 
    struct node *ptr1,*ptr2,*ptr3,*temp,*save;int i,flag=0;
    ptr1=NULL;
    ptr2=head;
    ptr3=NULL:
    save=NULL;
    while(ptr2!=NULL)
    {
        temp=ptr2;
        for(i=1;i<=k && ptr2!=NULL;i++)
        {
            ptr3=ptr2->next;
            ptr2->next=ptr1;
            ptr1=ptr2;
            ptr2=ptr3;
        }
        if(save!=NULL)
        save->next=ptr1;
        save=temp;
        temp->next=ptr2;
        if(flag==0)
        {
            head=ptr1;
            flag=1;
        }
    }
    return head;
}
