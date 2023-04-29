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

void deleteNode(Node *&head, int target, int pos)
{
    Node *temp = head;
    Node *prev = NULL;

    // empty list
    if (head == NULL)
        return;

    if (target == temp->data && pos == 1)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {

        while (temp != NULL && temp->data != target)
        {
            prev = temp;
            temp = temp->next;
        }
        // here we are assuiming that we have found the element
        if (temp == NULL)
        {
            cout << "NOde node found" << endl;
            return;
        }
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
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

    insertAtHead(head, 5);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 11);
    cout<<"Printing insertion at head: ";
    traverse(head);

    deleteNode(head, 9, 2);
    cout<<"Printing after delition: ";
    traverse(head);

    return 0;
}