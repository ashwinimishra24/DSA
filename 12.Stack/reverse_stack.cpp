#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int item)
{
    // Base case
    if(st.empty())
    {
        st.push(item);
        return;
    }

    // Step 1: Store the top element and then pop it out
    int topElement = st.top();
    st.pop();

    // Step 2: Recursive call
    insertAtBottom(st, item);

    // step 3: push the top element
    st.push(topElement);
}

void reverse(stack<int>& st)
{
    // Base case
    if(st.empty())
    {
        return;
    }

    // Step 1: Store the top element and then pop it out
    int topElement = st.top();
    st.pop();

    // Step 2: Recursive call
    reverse(st);

    // step 3: push the top element
    insertAtBottom(st, topElement);
}

int main()
{
    stack<int> st;

    // insertion in stack
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);
    st.push(12);
    st.push(14);

    reverse(st);

    cout<<"Printing elements of stack: "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}