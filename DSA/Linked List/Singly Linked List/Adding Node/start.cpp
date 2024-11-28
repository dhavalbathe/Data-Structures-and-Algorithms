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
    int arr[3]; 
    cout<<"Enter the 3 elements of array: ";
    for(int i=0;i<3;i++) cin>>arr[i];

    Node *Head = NULL;

    for(int i=0;i<3;i++) {
        if(Head == NULL) {
        Head = new Node(arr[0]);
        }
        else {
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    //print the value
    cout<<"Elements in LL are: "<<endl;
    Node *temp = Head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;

}