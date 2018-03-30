/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the class is
class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;
public:
MinHeap(int cap=100) {heap_size = 0; capacity = cap; harr = new int[cap];}
    int extractMin();
    void deleteKey(int i);
    void insertKey(int k);
};*/
/* Removes min element from min heap and returns it */
void min_heapify(int harr[],int i,int heap_size)
{
    int temp;
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<heap_size&& harr[left]<harr[i])
       smallest=left;
    if(right<heap_size && harr[right]<harr[smallest])
        smallest=right;
   if(smallest!=i)
   {
       temp=harr[smallest];
       harr[smallest]=harr[i];
       harr[i]=temp;
       min_heapify(harr,smallest,heap_size);
   }
}
int MinHeap ::  extractMin()
{
   if(heap_size==0)
   return -1;
   int mini=harr[0];
   harr[0]=harr[heap_size-1];
   heap_size--;
   min_heapify(harr,0,heap_size);
   return mini;
}
/* Removes element from position x in the min heap  */
void MinHeap :: deleteKey(int x)
{
    if(x>=heap_size)
    return;
    harr[x]=harr[heap_size-1];
    heap_size--;
    min_heapify(harr,x,heap_size);
}
/* Inserts an element at position x into the min heap*/

void MinHeap ::insertKey(int x)
{
    int i,l;
  harr[heap_size]=x;
  heap_size++;
  l=heap_size/2;
  for(i=l-1;i>=0;i--)
  {
      min_heapify(harr,i,heap_size);
  }
 
}

