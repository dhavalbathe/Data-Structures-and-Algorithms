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

Node* CreateLinkedList(int arr[], int index, int size, Node *prev) {
    if(index == size) return prev;
    Node *temp = new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr, index+1, size, temp);
}
int main()
{
    int arr[4] = {4, 2, 5, 6};
    Node *Head = CreateLinkedList(arr, 0, 4, NULL);
    Node *temp = Head;
    cout<<"Print the LL elements: "<<endl;
    while(temp) 
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp = temp->next;
    }
    return 0;
}