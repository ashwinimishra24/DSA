#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    int m;

    // creation of stack
    stack<int> st;

    // Taking the number of elements for stack from user
    cout<<"Enter the number of elements in stack: "<<endl;
    cin>>n;

    // Taking the values from user for n elements of stack
    cout<<"Enter the "<<n<<" elements for the stack: "<<endl;
    while(n--)
    {
        cin>>m;
        st.push(m);
    }

    // Printing the elements from stack
    cout<<"Elements in stack are: "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;



    // insertion in stack
    // st.push(2);
    // st.push(4);
    // st.push(6);
    // st.push(8);
    // st.push(10);

    // check size of stack
    // cout<<"Size of the stack is: "<<st.size()<<endl;

    // check stack is empty or not
    // cout<<"Stack is empty or not: "<<st.empty()<<endl;

    // top element of stack
    // cout<<"Top element of stack is: "<<st.top()<<endl;

    // delete element from stack
    // st.pop();
    // cout<<"Top element after deleting one element from stack: "<<st.top()<<endl;

    return 0;
}