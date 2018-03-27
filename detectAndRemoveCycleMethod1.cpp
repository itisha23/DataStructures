/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/
/*The function removes the loop from the linked list if present
You are required to complete this method*/
void removeTheLoop(Node *head)
{
     if(head==NULL)
     return;
     int flag=0;
     Node *slow,*fast,*ptr=NULL,*prev,*ptr2,*ptr3,*loop=NULL,*intersect,*ptr1;
     slow=head;
     fast=head;
     while(fast && fast->next)
     {
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast)
            {
                loop=slow;
                break;
            }
     }
     if(loop==NULL)
     return;
      ptr1=head;
     while(1)
     {
        
         ptr2=loop;
         while(ptr2->next!=loop)
         {
             if(ptr2==ptr1)
             {
                 flag=1;
                 intersect=ptr2;
                 break;
             }
             ptr2=ptr2->next;
             
         }
         if(flag)
         break;
         ptr1=ptr1->next;
     }
     prev=intersect;
     intersect=intersect->next;
      while(intersect->next!=prev)
      {
          intersect=intersect->next;
      }
     intersect->next=NULL;
     
}
