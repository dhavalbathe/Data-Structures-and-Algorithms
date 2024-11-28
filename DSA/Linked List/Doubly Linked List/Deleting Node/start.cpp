#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public: int data;
    Node *next, *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

Node* createDLL(vector<int> arr, int index, int size, Node *back) {
    if(index == size) return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index+1, size, temp);
    return temp;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node *head = NULL;
    head = createDLL(arr, 0, arr.size(), NULL);

    //! Deleting the first node of DLL

    if(head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
        if(head) head->prev = NULL;
    }
    //Print the elements in LL
    Node *trav = head;
    while(trav) {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}