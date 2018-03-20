/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void linkdelete(struct node  *head, int M, int N)
{
//Add code here  
     int count=0,a;
     if(head==NULL)
     return ;
     struct node *ptr,*prev,*ptr1,*ptr2;
     ptr=head;
     count=1;
     a=M+1;
     while(ptr!=NULL)
     {
         if(count==a)
         {
           
             ptr1=prev;
             ptr2=ptr;
             int i=N;
             while(i-- && ptr2!=NULL)
             {
                 ptr2=ptr2->next;
                 count++;
             }
             ptr1->next=ptr2;
             a=a+(M+N);
             ptr=ptr2;
            
         }
         else
         {
             prev=ptr;
             ptr=ptr->next;
               count++;
         }
       
     }

}
