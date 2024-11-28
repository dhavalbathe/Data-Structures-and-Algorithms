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
//Recursive Function for creating the linked list
Node* CreateLinkedList(int arr[], int index, int size) {
    if(index == size) return NULL;
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);
    return temp;
}

int main()
{
    int arr[5] = {2, 4, 5, 4, 3};
    Node *Head = CreateLinkedList(arr, 0, 5);

    int x = 3;
    int value = 30;
    x--;
    //Adding a element at particular location in LL
    Node *tail = Head;
    while(x--) {
        tail = tail->next;
    }

    Node *temp = new Node(value);
    temp->next = tail->next;
    tail->next = temp;

    Node *temp100 = Head;
    cout<<"Print the LL elements: "<<endl;
    while(temp100) {
        cout<<temp100->data<<" ";
        temp100 = temp100->next;
    }
    return 0;
}