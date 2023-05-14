#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void morrisTraversal(Node *root)
{
    Node *current = root;
    while (current != nullptr)
    {
        if (current->left == nullptr)
        {
            cout << current->data << " ";
            current = current->right;
        }
        else
        {
            Node *pre = current->left;
            while (pre->right != nullptr && pre->right != current)
            {
                pre = pre->right;
            }
            if (pre->right == nullptr)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                cout << current->data << " ";
                pre->right = nullptr;
                current = current->right;
            }
        }
    }
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->left->right = createNode(3);
    root->right = createNode(4);
    root->right->left = createNode(5);

    morrisTraversal(root);

    return 0;
}