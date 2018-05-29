void deleteAlt(struct Node *head){
      if(head==NULL || head->next==NULL)
         return;
       struct Node *ptr,*prev;
       ptr=head;
       int count=1;
       while(ptr!=NULL)
       {
          if(count%2==0)
          {
              prev->next=ptr->next;
              ptr=ptr->next;
          }
          else
          {
            prev=ptr;
            ptr=ptr->next;
          }
          count++;
       }
}
