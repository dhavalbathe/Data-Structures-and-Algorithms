#include<iostream>
using namespace std;
class Node
{
    public: 
    int data;
    Node *left, *right;

    public:
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* binaryTree()
{
    int x;
    cin >> x;
    if(x == -1) return NULL;

    Node *temp = new Node(x);
    cout << "Enter the left child of " << x << ": ";
    temp->left = binaryTree();
    cout << "Enter the right child of " << x << ": ";
    temp->right = binaryTree();
    return temp;
}

void preorder(Node *temp) {
    if(temp == NULL) {
        return;
    }
    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}
int main()
{
    cout << "Enter the root Node: ";
    Node *root = binaryTree();
    preorder(root);
    return 0;
}