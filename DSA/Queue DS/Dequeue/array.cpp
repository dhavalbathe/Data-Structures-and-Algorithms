#include<bits/stdc++.h>
using namespace std;

class Dequeue
{
    int *arr[];
    int front, rear, size;
    public: 
    Dequeue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool isEmpty()
    {
        return front==-1;
    }

    bool isFull()
    {
        return (rear+1)%size == front;
    }

    void push_front(int x)
    {
        if(isEmpty())
        {
            front = rear = 0;
            cout<<"Pushed "<<x<<"front front\n";
            arr[front] = x;
            return;
        }
        else if(isFull())
        {
            cout<<"Dequeue Overflow\n";
            return;
        }
        else
        {
            front = (front-1+size)%size;
            arr[front] = x;
            cout<<"Pushed "<<x<<"front front\n";
            return;
        }
    }

    void push_back(int x)
    {
        if(isEmpty())
        {
            front = rear = 0;
            arr[front] = x;
            cout<<"Pushed "<<x<<"from back\n";
            return;
        }
        else if(isFull())
        {
            cout<<"Dequeue Overflow\n";
            return;
        }
        else
        {
            rear = (rear+1)%size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<"front back\n";
            return;
        }
    }
}
int main()
{
    return 0;
}