#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, size;
    
    public:
    Queue(int s)
    {
        arr = new int[s];
        size = s;
        front = rear = -1;
    }

    //is queue is empty or not
    bool isEmpty()
    {
        return front==-1;
    }

    // Queue is full or not
    bool isFull()
    {
        return (rear+1)%size == front;
    }

    //push element in queue at end
    void push(int val)
    {
        // if queue is empty
        if(isEmpty())
        {
            cout<<val<<" pushed in queue\n";
            front = rear = 0;
            arr[front] = val;
        }
        //if queue if full
        else if(isFull())
        {
            cout<<"Queue Overflow\n";
            return;
        }
        //insert
        else
        {
            cout<<val<<" pushed in queue\n";
            rear = (rear+1)%size;
            arr[rear] = val;
        }
    }

    //pop element, starting
    void pop()
    {
        //Empty
        if(isEmpty())
        {
            cout<<"Queue underflow"<<endl;
            return;
        }
        //pop at start
        else
        {
            if(front == rear)
            {
                cout<<arr[front]<<" poped from queue"<<endl;
                front = rear = -1;
            }
            else
            {
                cout<<arr[front]<<" popped from queue"<<endl;
                front = (front+1)%size;
            }
        }
    }

    //finding the front element in the queue
    int start()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.pop();
    
    
    int x = q.start();
    if(q.isEmpty())
    cout<<x<<" ";
    return 0;
}