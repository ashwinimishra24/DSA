#include <iostream>
using namespace std;

class Node
{
    // Data Member are below:
    public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // step 1: create new node
    Node *newNode = new Node(d);

    // step2: set next ptr to head node
    newNode->next = head;

    // step3: head update;
    head = newNode;
}

void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    // object creation
    Node *obj = new Node(3);
    Node *head = obj;

    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 11);
    cout<<"Printing insertion at head: ";
    traverse(head);

    cout<<"Length of LL is: " << getLength(head) << endl;

    return 0;
}