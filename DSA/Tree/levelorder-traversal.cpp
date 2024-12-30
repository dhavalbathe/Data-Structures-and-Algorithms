#include<iostream>
#include<queue>
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

vector<int> levelorderTraversal(Node *root) {
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    Node *temp;
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->left);
    }
    return ans;
}
int main()
{
    cout << "Enter the root Node: ";
    Node *root = binaryTree();
    vector<int> arr = levelorderTraversal(root);
    for(int i=0;i<arr.size();i++) cout << arr[i] << " ";
    return 0;
}