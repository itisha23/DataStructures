
/*
struct Node
{
  int data;
  Node *next;
};
 */
void sortedInsert(Node** head_ref, int x)
{
   //Your code here
   int flag=0;
   Node *head,*ptr,*prev;
   head=*head_ref;
   if(head==NULL)
   {
       
       struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
       newnode->data=x;
       head=newnode;
       newnode->next=head;
        *head_ref=head;
   }
    else if(head->next==head)
   {
       if(x<head->data)
   {
       struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
       newnode->data=x;
       newnode->next=head;
       head->next=newnode;
       head=newnode;
       *head_ref=head;
       //return;
       
   }
   else
   {
       struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
       newnode->data=x;
       head->next=newnode;
       newnode->next=head;
   }
       
       //  return;
   }
   
   else if(x<head->data)
   {
       struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
       newnode->data=x;
       newnode->next=head;
       struct Node *ptr=head->next;
       while(ptr!=head)
       {
           prev=ptr;
           ptr=ptr->next;
       }
       prev->next=newnode;
      // head->next=newnode;
       head=newnode;
       *head_ref=head;
       //return;
       
   }
  
 
  // Node *ptr;
  else
  {
      ptr=head->next;
      prev=head;
    while(ptr!=head)
    {
        if(x<ptr->data)
        {
            struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
            newnode->data=x;
            newnode->next=ptr;
            prev->next=newnode;
            flag=1;
            break;
        }
        prev=ptr;
        ptr=ptr->next;
    }
    if(flag==0)
    {
         struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
          newnode->data=x;
          newnode->next=head;
          prev->next=newnode;
    }
     
  }
   
  
}
