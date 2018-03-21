/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/
int detectloop(Node *list)
{
   // your code her
    struct Node  *slow_p = list, *fast_p = list;
  
    while (fast_p && fast_p->next )
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;
        if (slow_p == fast_p)
        {
           //printf("Found Loop");
           return 1;
        }
    }
    return 0;
 
}
