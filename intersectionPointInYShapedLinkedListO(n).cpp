/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL || head2==NULL)
    return -1;
    int c1=0,c2=0,d,flag=0;
    Node *ptr,*ptr2,*save;
    
    ptr=head1;
    while(ptr!=NULL)
    {
        c1++;
        ptr=ptr->next;
    }
    ptr=head2;
    while(ptr!=NULL)
    {
        c2++;
        ptr=ptr->next;
    }
    d=abs(c2-c1);
    if(c1>=c2)
    {
        ptr=head1;
        while(d--)
        {
            ptr=ptr->next;
        }
        ptr2=head2;
        while(ptr!=NULL)
        {
            if(ptr==ptr2)
            {
                flag=1;
                save=ptr;
                break;
            }
            ptr=ptr->next;
            ptr2=ptr2->next;
        }
    }
    else
    {
        ptr=head2;
        while(d--)
        {
            ptr=ptr->next;
        }
        ptr2=head1;
        while(ptr!=NULL)
        {
            if(ptr==ptr2)
            {
                flag=1;
                save=ptr;
                break;
            }
            ptr=ptr->next;
            ptr2=ptr2->next;
        }
    }
    if(flag)
    return save->data;
    else
    return -1;
}
