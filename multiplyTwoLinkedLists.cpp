/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Linked list node structure
struct Node
{
    int data;
    Node* next;
};*/
/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/
/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long int num1=0,num2=0,pro,mod=1000000007;
  Node *ptr;
  ptr=l1;
   while(ptr!=NULL)
  {
      num1=(((num1%mod)*10)%mod+ptr->data%mod)%mod;
      ptr=ptr->next;
  }
  ptr=l2;
  while(ptr!=NULL)
  {
      num2=(((num2%mod)*10)%mod+ptr->data%mod)%mod;
      ptr=ptr->next;
  }
  pro=(num1%mod*num2%mod)%mod;
  return pro;
}
