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

Node *detectLoop(Node *&head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return slow;
    }
    return NULL;
}

bool detectAndDeleteLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }

    // Step1: detect if loop is present or not
    Node *fast = detectLoop(head);

    // Step2: detect beginning node
    Node *slow = head;
    while (fast != slow)
    {
        slow = slow->next;
        fast = fast->next;
    }

    Node *beginningNode = slow;
    
    // step3: remove the loop connection
    Node *temp = beginningNode;

    while (temp->next != beginningNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return true;
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
    cout << "Printing element in LL: ";
    traverse(head);

    cout << detectLoop(head) << endl;

    cout << detectAndDeleteLoop(head) << endl;
    traverse(head);

    return 0;
}