#include <bits/stdc++.h>
using namespace std;


struct trie{
    map<char,trie*>mp;
    bool isleaf;
};
trie *head=NULL;
trie *getnewnode()
{
    trie *newnode=new trie;
    newnode->isleaf=false;
    return newnode;
};

void insert(trie *&head,string s)
{
    if(head==NULL)
    head=getnewnode();
    
   trie * ptr=head;
   int  i=0;
    while(i<s.size())
    {
        if(ptr->mp.find(s[i])==ptr->mp.end())
          ptr->mp[s[i]]=getnewnode();
        ptr=ptr->mp[s[i]];
        i++;
    }
    ptr->isleaf=true;
}
vector<string> prefix(vector<string> &vec) {
    
    trie *ptr;

    int n=vec.size(),i,j;
    
    for(i=0;i<n;i++)
    insert(head,vec[i]);
    
    

    ptr=head;
    
    
    vector<string>ans;
    string s,str;
    for(i=0;i<n;i++)
    {
        s=vec[i];
        str="";
        str=str+s[0];
        j=1;
        ptr=head;
        ptr=ptr->mp[s[0]];
        while(ptr->mp.size()>=91)
        {
            str=str+s[j];
             ptr=ptr->mp[s[j]];
            j++;
           
        }
        ans.push_back(str);
    }
    return ans;
  
}

bool search(string s)
{
  trie *ptr=head;
  int i=0;
  while(i<s.size())
  {
    // if(ptr->mp[s[i]]==NULL)
     if(ptr->mp.count(s[i])==0)
      return false;
     ptr=ptr->mp[s[i]];
     i++;
     
  }
  return ptr->isleaf;
}

 void traverse(trie *ptr,string s,vector<string>&word)
{
  if(ptr->mp.size()==0)
     return;
  map<char,trie*>::iterator it;

    for(it=ptr->mp.begin();it!=ptr->mp.end();it++)
  {
     s=s+it->first;
 
    if(ptr->mp[it->first]->isleaf==true)
    word.push_back(s);
    traverse(ptr->mp[it->first],s,word);
    s.erase(s.size()-1,1);
    
    
  }
}

int main()
{
     
    int i,n;
    cin>>n;
    vector<string>vec(n);

    for(i=0;i<n;i++)
     {
    cin>>vec[i];
     insert(head,vec[i]);
     }

    
    /*string s="";
   vector<string>word;
  traverse(head,s,word);
    for(i=0;i<word.size();i++)
    cout<<word[i]<<" ";
    cout<<endl;*/

     /*cin>>s;
     bool a=search(s);
   cout<<a<<endl;*/

    vector<string>ans=prefix(vec);
    for(i=0;i<ans.size();i++)
   cout<<ans[i]<<" ";

     return 0;
}
