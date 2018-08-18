/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int k) {
    
    if(head==NULL || head->next==NULL)
    return head;
    
    ListNode *prev1=NULL,*prev2=NULL,*prev3=NULL,*equ=NULL,*gre=NULL,*ptr,*temp;
    
    ptr=head;
    head=NULL;
    
    while(ptr!=NULL)
    {
        if(ptr->val<k)
        {
            if(prev1==NULL)
             head=ptr;
            else
             prev1->next=ptr;
            prev1=ptr;
            
            temp=ptr->next;
            prev1->next=NULL;
            ptr=temp;
        }
        
      else  if(ptr->val>k)
        {
            if(prev2==NULL)
              gre=ptr;
            else
              prev2->next=ptr;
            prev2=ptr;
            
            temp=ptr->next;
            prev2->next=NULL;
            ptr=temp;
        }
        
        else
        {
            if(prev3==NULL)
               equ=ptr;
            else
              prev3->next=ptr;
            prev3=ptr;
            
            temp=ptr->next;
            prev3->next=NULL;
            ptr=temp;
        }
    }
    
    if(head==NULL && equ==NULL)
      head=gre;
      
    else if(head!=NULL && equ==NULL)
      prev1->next=gre;
      
   else if(head==NULL && equ!=NULL)
     {
         head=equ;
         prev3->next=gre;
     }
     
    else
    {
        prev1->next=equ;
        if(equ)
        prev3->next=gre;
    }
   
    return head;
}
