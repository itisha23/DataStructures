/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        // Your Code
        while(s1.size()!=0)
        {
            int a=s1.top();
            s2.push(a);
            s1.pop();
        }
        s1.push(x);
        while(s2.size()!=0)
        {
            int a=s2.top();
            s1.push(a);
            s2.pop();
        }
        
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.size()==0)
    return -1;
    else
    {
        int a=s1.top();
        s1.pop();
        return a;
        
    }
        // Your Code       
}
