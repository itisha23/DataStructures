/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
structure of node is as
struct node
{
	int data;
	struct node* next;
};
*/
void alternatingSplitList(struct node* headRef, struct node** aRef, struct node** bRef)
{
    if(headRef==NULL)
    {
        *aRef=headRef;*bRef=headRef;
         return;
    }
    else if(headRef->next==NULL)
    {
        *aRef=headRef;*bRef=NULL;return;
    }
      struct node *head,*prev1,*prev2,*ptr;prev2=NULL;
      head=headRef;
      *aRef=head;
      ptr=head;
      int count=1;
      while(ptr!=NULL)
      {
          if(count%2==0)
          {
              prev1->next=ptr->next;//cout<<prev2->data<<endl;
              if(prev2==NULL)
              {
                 // cout<<"hi";
                  *bRef=ptr;
                
                  prev2=ptr;
              }
              else
              {
                    //cout<<ptr->data<<endl;
                  prev2->next=ptr;
                  prev2=ptr;
              }
              ptr=ptr->next;
              prev2->next=NULL;
          }
          else
          {
              prev1=ptr;
              ptr=ptr->next;
          }
          count++;
      }
      
}
