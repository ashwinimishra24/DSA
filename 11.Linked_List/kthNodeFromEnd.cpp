#include<iostream>
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

int countKFromLast(Node* head, int k)
{
    // Base Case
    if(head == NULL)
    {
        return 0;
    }

    int count = countKFromLast(head->next, k) + 1;
    
    if(count == k)
    {
        cout<<"Kth element from last is: "<<head->data<<endl;
    }
    return count;
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
    cout<<"Printing element in LL: ";
    traverse(head);

    countKFromLast(head, 2);

    return 0;
}