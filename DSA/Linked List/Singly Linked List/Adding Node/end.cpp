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

int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Print the array data: "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    Node *Head = NULL;
    for(int i=0;i<n;i++) {
        //Linked List is empty
        if(Head == NULL) {
            Head = new Node(arr[i]);
        } 
        //Linked List is created
        else {
            Node *tail = Head;
            while(tail->next) {
                tail = tail->next;
            }
            tail->next = new Node(arr[i]);
        }
    }

    cout<<"Print the LL data: "<<endl;
    Node *temp = Head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}