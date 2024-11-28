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
    int arr[5] = {2, 4, 6, 8, 10};
    Node *Head = CreateLinkedList(arr, 0, 5);

    int x = 4;
    x--;
    //! Delete the Node at position x from LL
    Node *prev = NULL;
    Node *curr = Head;
    
    if(Head!=NULL) {
        if(Head->next == NULL) {
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        else {
            while(x--) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }
    }
    Node *temp100 = Head;
    cout<<"Print the LL elements: "<<endl;
    while(temp100) {
        cout<<temp100->data<<" ";
        temp100 = temp100->next;
    }
}