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
bool isPalindrome(Node *head)
{
    int flag=0;
    stack<int>st;
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        st.push(ptr->data);
        ptr=ptr->next;
    }
    flag=0;
      ptr=head;
    while(ptr!=NULL)
    {
       if(ptr->data==st.top())
       {
           ptr=ptr->next;
           st.pop();
       }
       else
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    return false;
    else
    return true;
  
}


int main()
{
    int i,x ,n=5;struct Node *head1=NULL,*head2=NULL,*head3=NULL;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        head1=create(head1,x);
    }
    //print(head1);
  bool a= isPalindrome(head1);
    if(a)
     cout<<"yes";
     else
     cout<<"no";
    cout<<endl;
    
}






