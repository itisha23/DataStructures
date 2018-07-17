 int Solution::solve(vector<int> &vec) {

    int n,i,j,count,height=INT_MIN;
    n=vec.size();
    for(i=0;i<n;i++)
    {
        count=1;
        j=i;
        while(vec[j]!=-1)
        {
            count++; j=vec[j];
        }
         
          height=max(height,count);
    }
    return height;
}
