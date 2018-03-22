/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of the Linked list Node is as follows:
struct Node {
    int val;
    struct Node* next;
}; */
void intersection(Node **head1, Node **head2,Node **head3)
{
    // Your Code Here
     Node *h1,*h2,*h3,*ptr1,*ptr2,*prev;
     h1=*head1;h2=*head2;h3=*head3;
     if(h1==NULL ||h2==NULL)
      return;
     ptr1=h1;
     ptr2=h2;
     while(ptr1!=NULL&& ptr2!=NULL)
     {
         if(ptr1->val<ptr2->val)
           ptr1=ptr1->next;
         else if(ptr1->val>ptr2->val)
           ptr2=ptr2->next;
         else
         {
             struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
             newnode->val=ptr1->val;
             newnode->next=NULL;
             if(h3==NULL)
             {
                 h3=newnode;
                 prev=h3;
             }
             else
             {
                 prev->next=newnode;
                 prev=newnode;
             }
             ptr1=ptr1->next;
             ptr2=ptr2->next;
         }
     }
     *head3=h3;
     
     
}
