/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed
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

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* func(struct Node*root,int &i,int n,int pre[],char arr[])
{
    if(root==NULL && i<n)
    {
        cout<<pre[i]<<" ";
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=pre[i];
        newnode->left=NULL;
        newnode->right=NULL;
        root=newnode;
    }
    if(arr[i]=='N')
    {
        i++;
        root->left=func(root->left,i,n,pre,arr);
        i++;
        root->right=func(root->right,i,n,pre,arr);
    }
    return root;
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
   int i=0;
  struct Node*head=NULL;
 
  head=func(head,i,n,pre,preLN);
  return head;
}

void inorder(struct Node*root)
{
   if(root==NULL)
     return;
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}


int main()
{
//freopen("inp.in","r",stdin); 
     int pre[]={10,30,20,5,15};
      char preLN[]={'N','N','L','L','L'}; 
      int n=5;
     struct Node *head=NULL;
    head=constructTree(n,pre,preLN);
   // cout<<"hi";
     inorder(head);

}



