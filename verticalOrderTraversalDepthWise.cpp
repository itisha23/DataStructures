void func(Node *root,int count,map<int,vector<int> >&mp)
{
    if(root==NULL)
    return;
    mp[count].push_back(root->data);
    if(root->left)
    func(root->left,count-1,mp);
    func(root->right,count+1,mp);
}
void verticalOrder(Node *root)
{
   map<int,vector<int> >mp;
   int x=0,i;
   vector<int>v;
   func(root,x,mp);
   map<int,vector<int> >::iterator it;
   for(it=mp.begin();it!=mp.end();it++)
   {
       v=it->second;
       for(i=0;i<v.size();i++)
       {
           cout<<v[i]<<" ";
       }cout<<"$";
   }
}

