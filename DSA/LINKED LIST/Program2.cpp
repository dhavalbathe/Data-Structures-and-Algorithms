//Insert data at the end of the linked list
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
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Node *Head = NULL;
    Node *Tail = NULL;
    for(int i=0; i<5;i++)
    {
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    Node *temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}