#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top;

    bool flag;
    //Stack constructor
    Stack(int s) 
    {
        size = s;
        arr = new int[s];
        top = -1;
        flag = 1;
    }

    public:
    void push(int value) 
    {
        if(top == size-1) 
        {
            cout<<"Stack overflow !";
            return;
        } 
        else 
        {
            top++;
            arr[top] = value;
            flag = 0;
        }
    }

    void pop()
    {
        if(top == -1) {
            cout<<"Stack Underflow !";
            return;
        }
        else
        {
            top--;
            if(top == -1) 
            flag = 1;
        }
    }

    bool isEmpty()
    {
        return top==-1;
    }

    int isSize()
    {
        return top+1;
    }

    int peek()
    {
        if(top == -1) 
        {
            cout<<"Stack is Empty !"<<endl;
        }
        else
        {
            return arr[top];
        }
    }
};

int main()
{
    Stack s(5);
    int value = s.peek();
    if(s.flag == 0) 
    cout<<value<<endl;
    return 0;
}