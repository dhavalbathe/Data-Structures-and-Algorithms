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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = NULL;
    Node *tail = head;
    for(int i=0;i<arr.size();i++) {
        if(head == NULL) {
            head = new Node(arr[i]);
            tail = head;
        } 
        else {
            Node *temp = new Node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
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