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

Node *merge(Node *&head1, Node *&head2)
{
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* dummy = new Node(-1);
    Node* tempDummy = dummy;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data <= temp2->data)
        {
            tempDummy->next = temp1;
            tempDummy = temp1;
            temp1 = temp1->next;
        }
        else
        {
            tempDummy->next = temp2;
            tempDummy = temp2;
            temp2 = temp2->next;
        }
    }

    // it is possible that elements are left in temp1 list
    while (temp1 != NULL)
    {
        tempDummy->next = temp1;
        tempDummy = temp1;
        temp1 = temp1->next;
    }

    // it is possible that elements are left in temp2 list
    while (temp2 != NULL)
    {
        tempDummy->next = temp2;
        tempDummy = temp2;
        temp2 = temp2->next;
    }

    Node *head = dummy->next;

    // delete dummy node
    dummy->next = NULL;
    delete dummy;

    return head;
}

int main()
{
    // object creation
    Node* head1 = new Node(1);
    Node* head2 = new Node(6);

    insertAtHead(head1, 2);
    insertAtHead(head1, 3);
    insertAtHead(head1, 4);
    insertAtHead(head1, 5);
    cout<<"Printing LL 1 : ";
    traverse(head1);

    insertAtHead(head2, 7);
    insertAtHead(head2, 8);
    insertAtHead(head2, 9);
    insertAtHead(head2, 10);
    cout<<"Printing LL 2 : ";
    traverse(head2);


    cout<<"Printing merged LL: ";
    Node* head = merge(head1, head2);
    traverse(head);

    return 0;
}