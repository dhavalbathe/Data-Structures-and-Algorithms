//Add Node at End Using Recursion
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int arr[], int index, int size)
{
    if(index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);
    return temp;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {2,4,6,8,10};

    Head = CreateLinkedList(arr,0,5);
    //Delete a Node at start

    if(Head != NULL)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }
    Node *temp = Head;
    
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}