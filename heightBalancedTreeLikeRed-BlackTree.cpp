pair<bool,pair<int,int> > func(Node *root)
{
  if(root==NULL)
    return make_pair(true,make_pair(0,0));
  p1=func(root->left);
  p2=func(root->right);

  val1=p1.first;
  val2=p2.first;

  min1=p1.second.first;
  max1=p1.second.second;

  min2=p2.second.first;
  max2=p2.second.second;

  minh=min(min1,min2)+1;
  maxh=max(max1,max2)+1;

  if(maxh<=2*minh && val1 && val2)
    return make_pair(true,make_pair(minh,maxh));
  else
    return make_pair(false,make_pair(minh,maxh));
}
