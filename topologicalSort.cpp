/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* You need to complete this function */
int * topoSort(vector<int> graph[], int N)
{
    int i,j;
   int indegree[N];
   for(i=0;i<N;i++)
   indegree[i]=0;
  // int arr[N];
  int* arr = new int[N];
   for(i=0;i<N;i++)
   {
       for(j=0;j<graph[i].size();j++)
       indegree[graph[i][j]]++;
   }
   j=0;
  queue<int>q;
   for(i=0;i<N;i++)
   if(indegree[i]==0)
   q.push(i);
   while(q.size()!=0)
   {
       int a=q.front();
       q.pop();
        arr[j]=a;
        j++;
       for(i=0;i<graph[a].size();i++)
       {
           indegree[graph[a][i]]--;
           if(indegree[graph[a][i]]==0)
           q.push(graph[a][i]);
       }
   }
   return arr;
}
