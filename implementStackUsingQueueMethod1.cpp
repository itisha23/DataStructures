/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        if(q1.size()==0)
        {
            q1.push(x);
        }
        else
        {
            while(q1.empty()!=1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
             while(q2.empty()!=1)
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code    
        if(q1.size()==0)
        return -1;
        else
        {
            int a=q1.front();
            q1.pop();
            return a;
        }
}
