/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
Node *compute(Node *head)
{
// your code goes here
   struct Node *maxi,*ptr1,*ptr2,*prev1,*temp,*prev2;
   prev1=NULL;prev2=NULL;
   ptr1=head;
   while(ptr1!=NULL)
   {
       ptr2=head;prev2=NULL;
       while(ptr2!=ptr1)
       {
           if(ptr2->data<ptr1->data)
           {
               if(prev2==NULL)
               {
                   head=head->next;
                   ptr2=ptr2->next;
                   prev2=prev2;
               }
               else
               {
                   prev2->next=ptr2->next;
                   prev2=prev2;
                   ptr2=ptr2->next;
               }
           }
           else
           {
                prev2=ptr2;
                ptr2=ptr2->next;
           }
         
       }
       prev1=ptr1;
       ptr1=ptr1->next;
   }
   
   return head;
}
