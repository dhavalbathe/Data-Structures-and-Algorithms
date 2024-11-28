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

    int pos = 2, val = 100;
    //Insert the element at the middle of the list
    //?If insertion is at the starting of the list
    if(pos == 1) {
        if(head == NULL) {
            head = new Node(val);
        } else {
            Node *temp = new Node(val);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    } else {
        pos--;
        Node *curr = head;
        while(--pos) {
            curr = curr->next;
        }
        //? If the insertion is at the end 
        if(curr->next == NULL) {
            Node *temp = new Node(val);
            temp->prev = curr;
            curr->next = temp;
        }
        //? If the insertion is at the middle
        else {
            Node *temp = new Node(val);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
    //Print the elements in LL
    Node *trav = head;
    while(trav) {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}