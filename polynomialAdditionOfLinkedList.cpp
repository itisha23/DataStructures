void addPolynomial(Node *head1, Node *head2)
{
     Node *ptr1=head1;
    Node *ptr2=head2;
    Node *ptr3=NULL,*head3;
    if(head1==NULL)
    head3=head2;
    else if(head2==NULL)
    head3=head1;
   else
   {
        while(ptr1!=NULL && ptr2!=NULL)
    {
        Node *newnode=(Node*)malloc(sizeof(Node));
        newnode->next=NULL;
        if(ptr1->pow==ptr2->pow)
        {
            newnode->coeff=ptr1->coeff+ptr2->coeff;newnode->pow=ptr1->pow;
           if(ptr3==NULL)
            {
                head3=newnode;ptr3=newnode;
            }
            else
            {
                ptr3->next=newnode;
                ptr3=newnode;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->pow<ptr2->pow)
        {
             newnode->coeff=ptr2->coeff;newnode->pow=ptr2->pow;
           if(ptr3==NULL)
            {
                head3=newnode;ptr3=newnode;
            }
            else
            {
                ptr3->next=newnode;
                ptr3=newnode;
            }
            ptr2=ptr2->next;
        }
        else
        {
             newnode->coeff=ptr1->coeff;newnode->pow=ptr1->pow;
           if(ptr3==NULL)
            {
                head3=newnode;ptr3=newnode;
            }
            else
            {
                ptr3->next=newnode;
                ptr3=newnode;
            }
            ptr1=ptr1->next;
        }
        
    }
    while(ptr1!=NULL)
    {
           Node *newnode=(Node*)malloc(sizeof(Node));
           newnode->next=NULL;
            newnode->coeff=ptr1->coeff;newnode->pow=ptr1->pow;
           if(ptr3==NULL)
            {
                head3=newnode;ptr3=newnode;
            }
            else
            {
                ptr3->next=newnode;
                ptr3=newnode;
            }
            ptr1=ptr1->next;
    }
     while(ptr2!=NULL)
    {
           Node *newnode=(Node*)malloc(sizeof(Node));
           newnode->next=NULL;
            newnode->coeff=ptr2->coeff;newnode->pow=ptr2->pow;
           if(ptr3==NULL)
            {
                head3=newnode;ptr3=newnode;
            }
            else
            {
                ptr3->next=newnode;
                ptr3=newnode;
            }
            ptr2=ptr2->next;
    }
   }
   
   ptr3=head3;
   while(ptr3!=NULL)
   {
       if(ptr3==head3)
       cout<<ptr3->coeff<<"x^"<<ptr3->pow;
       else
          cout<<" + "<<ptr3->coeff<<"x^"<<ptr3->pow;
       ptr3=ptr3->next;
   }
    
}
