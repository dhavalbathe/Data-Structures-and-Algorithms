#include<bits/stdc++.h>
using namespace std;

class Node
{
    public: int data;
    Node *prev, *next;
    public:
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Dequeue
{
    Node *front, *rear;

    public:
    Dequeue()
    {
        front = NULL;
        rear = NULL;
    }

    void push_front(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            cout<<"Pushed: "<<x<<" in front of dequeue\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout<<"Pushed "<<x<<" in front of dequeue\n";
            return;
        }
    }

    void push_back(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in back of dequeue\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            cout<<"Pushed "<<x<<" in back of dequeue\n";
            return;
        }
    }

    void pop_front()
    {
        if(front == NULL)
        {
            cout<<"Dequeue Underflow\n";
            return;
        }
        else
        {
            Node *temp = front;
            cout<<"Popped "<<temp->data<<" from front\n";
            front = front->next;
            delete temp;
            if(front)
            front->prev = NULL;
            else
            rear = NULL;
            return;
        }
    }

    void pop_back()
    {
        if(rear == NULL)
        {
            cout<<"Dequeue Underflow\n";
            return;
        }
        else
        {
            Node *temp = rear;
            cout<<"Popped "<<rear->data<<" from back\n";
            rear = rear->prev;
            delete temp;
            if(rear)
            rear->next = NULL;
            else
            front = NULL;
            return;
        }
    }

    int start()
    {
        if(front == NULL)
        return -1;
        else 
        return front->data;
    }

    int end()
    {
        if(rear == NULL)
        return -1;
        else 
        return rear->data;
    }
};
int main()
{
    Dequeue d;
    d.push_back(5);
    d.pop_back();
    cout<<"Start: "<<d.start()<<endl;
    cout<<"End: "<<d.end()<<endl;
    return 0;
}