#include<bits/stdc++.h>
using namespace std;

class Node {
    public: int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    int arr[6] = {0, 2, 4, 6, 8, 10};
    Node *head = NULL;
    for(int i=0;i<6;i++) {
        if(head == NULL) {
            head = new Node(arr[i]);
        }
        else {
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    //Print the elements in LL
    Node *trav = head;
    while(trav) {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    cout<<endl;
    return 0;
}