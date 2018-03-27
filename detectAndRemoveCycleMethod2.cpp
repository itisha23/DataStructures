#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node* create(struct Node *head,int data)
{
    struct Node *ptr;
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    return head;
}
void print(struct Node *head)
{
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void removeTheLoop(Node *head)
{
     if(head==NULL)
     return;
     int flag=0;
     Node *slow,*fast,*ptr=NULL,*prev,*ptr2,*ptr3,*loop=NULL,*inter,*ptr1;
     slow=head;
     fast=head;
     while(fast && fast->next)
     {
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast)
            {
                loop=slow;
                break;
            }
     }
     if(loop==NULL)
     return;
     int cou=1;
     ptr=loop;
     while(ptr->next!=loop)
     {
         cou++;
         ptr=ptr->next;
     }
    
    cout<<cou;
     ptr=head;
     while(cou--)
     {
         ptr=ptr->next;
     }
     ptr1=head;
     while(ptr1!=ptr)
     {
         ptr1=ptr1->next;
         ptr=ptr->next;
     }
     inter=ptr;
     while(ptr->next!=inter)
     {
         ptr=ptr->next;
         
     }
     ptr->next=NULL;
}


int main()
{
    int i,x ,n;
    struct Node *head=NULL,*ptr,*ptr1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        head=create(head,x);
    }
    int a=3;
ptr=head;
    while(a--)
{
   ptr=ptr->next;
}
ptr1=head;
while(ptr1->next!=NULL)
{
   ptr1=ptr1->next;
}
ptr1->next=ptr;
removeTheLoop(head);
    //print(head);
    cout<<endl;
    
}






