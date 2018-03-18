/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of node is as follows
struct node{
	string data;
	node *left;
	node *right;
};
*/
/*You are required to complete below method */
int convert(string s)
{
    stringstream ss(s);
    int x;
    ss>>x;
    return x;
}
int evalTree(node* root)
{
    //Your code here
     int lst,rst;
    if(root->left==NULL && root->right==NULL)
    {
        string s=root->data;
        int x=convert(s);
         return x;
         
    }
   
    lst=evalTree(root->left);
    rst=evalTree(root->right);
    if(root->data=="+")
    return lst+rst;
     if(root->data=="-")
    return lst-rst;
     if(root->data=="*")
    return lst*rst;
     if(root->data=="/")
    return lst/rst;
    

}
