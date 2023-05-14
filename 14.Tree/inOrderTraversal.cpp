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

void inOrderTraversal(Node *&root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // Left child of Node
    inOrderTraversal(root->left);

    // Node
    cout << root->data << " ";

    // Right child of Node
    inOrderTraversal(root->right);
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL and root->right == NULL)
    {
        return 0;
    }

    int leftAns = height(root->left);
    int rightAns = height(root->right);

    return 1 + max(leftAns, rightAns);
}

int main()
{
    Node *root = NULL;

    root = buildTree();

    cout << "Printing the Inorder Traversal for the Tree: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Height of the tree is: " << height(root) << endl;

    return 0;
}