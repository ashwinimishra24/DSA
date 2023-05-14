#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    cout << "Enter the value of node: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *newNode = new Node(data);

    cout << "Enter the value for left child of " << data << endl;
    newNode->left = buildTree();

    cout << "Enter the value for right child of " << data << endl;
    newNode->right = buildTree();

    return newNode;
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    return 0;
}