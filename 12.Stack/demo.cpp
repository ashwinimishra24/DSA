#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int s)
    {
        arr = new int[s];
        top = -1;
        size = s;
    }

    void push(int d)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow for element: " << d << endl;
            return;
        }
        top++;
        arr[top] = d;
        // cout<<"Top -> "<<top<<endl;
        // cout<<"arr[top] -> "<<arr[top]<<endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        top--;
    }

    int getSize()
    {
        return this->top + 1;
    }

    int getTop()
    {
        if (top != -1)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Stack *st = new Stack(10);

    st->push(10);
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(50);
    st->push(60);
    st->push(70);
    st->push(80);
    st->push(90);
    st->push(100);
    st->push(110);
    st->push(120);
    st->push(130);

    cout << "Top element is: " << st->getTop() << endl;

    cout << "Size: " << st->getSize() << endl;

    st->pop();
    st->pop();
    st->pop();
    st->pop();

    cout << "Top element is: " << st->getTop() << endl;

    cout << "Size: " << st->getSize() << endl;

    cout << "Is empty: " << st->isEmpty() << endl;

    return 0;
}