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

int findSizeOfTree(Node *root) {
    if(root == NULL) return 0;
    int count = 1 + findSizeOfTree(root->left) + findSizeOfTree(root->right);
    return count;
}
int main()
{
    cout << "Enter the root Node: ";
    Node *root = binaryTree();
    cout << findSizeOfTree(root);
    return 0;
}