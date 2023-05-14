#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    q.push(root);

    // for printing level wise
    q.push(NULL);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        // for printing level wise
        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";
            // adding the child nodes to the queue
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
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

    cout << "Printing the LevelOrder Traversal for the Tree: " << endl;
    levelOrderTraversal(root);

    cout << "Height of the tree is: " << height(root) << endl;

    return 0;
}