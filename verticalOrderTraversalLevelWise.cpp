
void verticalOrder(Node *root)
{
    if(root==NULL)
    return;
    queue<pair<struct Node*,int> >q;
    int vd=0,i;
    q.push(make_pair(root,vd));
    pair<struct Node*,int>p;
    map<int,vector<int> >mp;
    vector<int>v;
    struct Node *ptr;
    while(q.empty()!=1)
    {
        p=q.front();
       
        ptr=p.first;
        vd=p.second;
        q.pop();
        mp[vd].push_back(ptr->data);
        if(ptr->left!=NULL)
        q.push(make_pair(ptr->left,vd-1));
        if(ptr->right!=NULL)
        q.push(make_pair(ptr->right,vd+1));
    }
    map<int,vector<int> >::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        v=it->second;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"$";
    }
}
