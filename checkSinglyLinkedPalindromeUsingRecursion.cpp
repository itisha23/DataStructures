bool func(struct Node *&ptr1,struct Node  *ptr2)
{
    if(ptr2==NULL)
     return true;
    bool val=func(ptr1,ptr2->next);
    if(val && ptr2->data==ptr1->data)
    {
        ptr1=ptr1->next;
        return true;
    }
    return false;
}
bool isPalindrome(Node *head)
{
   struct Node *ptr1=head;
   if(ptr1==NULL)
     return true;
   struct Node *ptr2=head->next;
  return func(ptr1,ptr2);
   
}
