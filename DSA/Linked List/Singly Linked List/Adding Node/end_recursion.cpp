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
    Node *temp = Head;
    cout<<"Print the LL elements: "<<endl;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}