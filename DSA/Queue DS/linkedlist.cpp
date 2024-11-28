#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    public:
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;
    
    public:
    Queue()
    {
        front = rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void push(int x)
    {
        if(isEmpty())
        {
            front = new Node(x);
            cout<<x<<" pushed in queue"<<endl;
            rear = front;
        }
        else
        {
            rear->next = new Node(x);
            cout<<x<<" pushed in queue"<<endl;
            rear = rear->next;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Queue underflow"<<endl;
            return;
        }
        else
        {
            cout<<front->data<<" popped fron queue"<<endl;
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    int start()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{
    Queue q;
    q.push(4);

    return 0;
}