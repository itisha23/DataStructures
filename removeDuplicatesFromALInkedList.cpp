Node *removeDuplicates(Node *root)
{
    struct Node *ptr=root;
    struct Node *prev=root;
    if(root==NULL || root->next==NULL)
      return root;
    ptr=ptr->next;
    while(ptr!=NULL)
    {
        if(ptr->data==prev->data)
        {
            prev->next=ptr->next;
            ptr=ptr->next;
        }
        else
        {
            prev=ptr;
            ptr=ptr->next;
        }
    }
    return root;
}
