#include <bits/stdc++.h>
using namespace std;
struct node
{
     int data;
     struct node* left;
     struct node* right;
};
 
struct node* newNode(int data)
{
     struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
 
     return(node);
}
void printInorder(struct node* node)
{
     if (node == NULL)
          return;
     printInorder(node->left);
     printf("%d ", node->data);  
     printInorder(node->right);
}

void func(node * root)
{
    stack<node*>st;
    node*ptr=root;
    while(1)
    {
     
       while(ptr!=NULL)
        {
            st.push(ptr);
            ptr=ptr->left;
        }
      if(st.empty()!=1)
      {
        ptr=st.top();
        st.pop();
        cout<<ptr->data<<" ";
        ptr=ptr->right;
      }
      else
        break;
    }
}
 
int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     //root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
     func(root);
}
