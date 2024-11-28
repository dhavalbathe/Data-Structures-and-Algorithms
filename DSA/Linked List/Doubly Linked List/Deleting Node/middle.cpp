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

    //! Deleting the middle node of DLL
    int pos = 7;
    if(head!=NULL) {
        if(pos == 1) {
            if(head->next==NULL) {
                Node *temp = head;
                head = NULL;
                delete temp;
            } else {
                Node *temp = head;
                head = head->next;
                head->prev = NULL;
                delete temp;
            }
        } else {
            Node *curr = head;
            while(--pos) {
                curr = curr->next;
            }
            if(curr->next == NULL) {
                curr->prev->next = NULL;
                delete curr;
            } else {
                curr->next->prev = curr->prev;
                curr->prev->next = curr->next;
                delete curr;
            }
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