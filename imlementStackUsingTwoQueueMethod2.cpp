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
    q1.push(x);
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
         queue<int> q3;
        if(q1.size()==0 && q2.size()==0)
           return -1;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int a=q1.front();
        q1.pop();
        q3=q1;
        q1=q2;
        q2=q3;
        return a;
}
