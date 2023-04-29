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

void insertAtTail(Node *&tail, int d)
{
    // step 1: cration of Node
    Node *newNode = new Node(d);

    // step2: set next ptr to new node
    tail->next = newNode;
    
    // step3: tail update;
    tail = newNode;
}

void insertAtPosition(Node *&head, int pos, int d)
{
    // TODO: tail updation, while inserting node at the end
    // TODO: validate that position should
    // be atmax 1 more than current Lenght of LL
    if (pos == 1)
    {
        insertAtHead(head, d);
    }
    else
    {
        // Step1: cration of New Node
        Node *newNode = new Node(d);

        // step2:
        Node *prev = head;
        int t = pos - 2;
        while (t--)
        {
            prev = prev->next;
        }

        // step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
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

int main()
{
    // object creation
    Node *obj = new Node(3);
    Node *head = obj;
    Node *tail = obj;

    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 11);
    // cout<<"Printing insertion at head: ";
    // traverse(head);

    // insertAtTail(tail, 5);
    // insertAtTail(tail, 7);
    // insertAtTail(tail, 9);
    // insertAtTail(tail, 11);
    // cout<<"Printing insertion at tail: ";
    // traverse(tail);

    traverse(head);
    insertAtPosition(head, 3, 12);
    traverse(head);

    return 0;
}