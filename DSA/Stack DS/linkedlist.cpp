#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
    public:
    Node *top;
    int size;

    public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    //push
    void push(int value)
    {
        Node *temp = new Node(value);
        if(temp == NULL) 
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
        }
    }

    //pop
    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if(top == NULL) 
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else 
        {
            return top->data;
        }
    }

    //isEmpty
    bool isEmpty()
    {
        return top==NULL;
    }

    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(5);
    cout<<s.peek()<<" "<<s.isSize();
    return 0;
}