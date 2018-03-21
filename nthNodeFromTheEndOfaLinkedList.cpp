/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
       // Your code here
       if(head==NULL)
       return -1;
       int count=0;
       struct Node *ptr=head;
       while(ptr!=NULL)
       {
           count++;
           ptr=ptr->next;
       }
        ptr=head;
        if(n>count)
        return -1;
       int a=count-n+1;
       count=0;
       while(ptr!=NULL)
       {
           count++;
           if(a==count)
           {
               return ptr->data;
           }
           ptr=ptr->next;
       }
}
