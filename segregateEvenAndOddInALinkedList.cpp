#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define fast ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define mod 1000000007
#define inf 2e18
#define pb push_back
#define fi first
#define se second

typedef int l;
typedef unsigned int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vi;

struct node
{
 
    int data;
    node *next;
};


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,i;
        struct node* head,*prev,*ptr,*last,*last1;
        prev=NULL;
        cin>>n;
    
        f(i,0,n)
        {
            cin>>x;
            struct node* newnode=(node*)malloc(sizeof(node));
            newnode->data=x;
            newnode->next=NULL;
           // newnode->left=NULL;
            if(prev==NULL)
             {
                 head=newnode;
                 prev=newnode;
             }
             else
             {
                 prev->next=newnode;
                 prev=newnode; 
             }
            
        }
        ptr=head;
        
        while(ptr->next!=NULL)
        {
          ptr=ptr->next;//cout<<ptr->data<<endl;
        }
        last1=ptr;
        last=ptr;
        ptr=head;
        prev=NULL;
        while(ptr!=last1)
        {
             
            if(ptr->data%2==0)
            {
                prev=ptr;
                ptr=ptr->next;
            }
            else
            {
                last->next=ptr;
                last=ptr;
                //last->next=NULL;
                if(ptr==head)
                {
                    head=head->next;
                    ptr=head;
                }
                else
                {
                    prev->next=ptr->next;
                    ptr=ptr->next;
                }
                last->next=NULL;
               // ptr->next=NULL;
               // cout<<ptr->data<<endl;
            }
           
        }
         
         //cout<<ptr->data<<endl;
        if(ptr->data%2==1)
        {
            last->next=ptr;
            last=ptr;
                //last->next=NULL;
            if(ptr==head)
                {
                    head=head->next;
                    ptr=head;
                }
                else
                {
                    prev->next=ptr->next;
                    ptr=ptr->next;
                }
                last->next=NULL;
        }
        
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
          ptr=ptr->next;
        }
        cout<<endl;
    }
}


