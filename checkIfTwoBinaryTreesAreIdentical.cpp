/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2)
{
   stack<Node*>s1;
   stack<Node*>s2;
   Node *curr1,*curr2;
   curr1=r1;curr2=r2;
   while(1)
   {
       while(curr1!=NULL && curr2!=NULL)
       {
           s1.push(curr1);s2.push(curr2);
           curr1=curr1->left;curr2=curr2->left;
       }
       if(curr1!=NULL || curr2!=NULL)
         return false;
        if(s1.empty()!=1 && s2.empty()!=1)
        {
            curr1=s1.top();curr2=s2.top();
            s1.pop();s2.pop();
            if(curr1->data!=curr2->data)
            return false;
            curr1=curr1->right;curr2=curr2->right;
        }
        else if(s1.empty()==1 && s2.empty()==1)
           return true;
        else if(s1.empty()!=1 || s2.empty()!=1)
           return false;
        
   }
}
