#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>& st, int toatalSize)
{
    // Base case
    if( (toatalSize/2)+1 == st.size() )
    {
        cout<<"Middle element is: "<<st.top()<<endl;
        return;
    }

    // Step 1: Store the top element and then pop it out
    int topElement = st.top();
    st.pop();

    // Step 2: Recursive call
    printMiddle(st, toatalSize);

    // step 3: push the top element
    st.push(topElement);
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

    printMiddle(st, st.size());
    
    return 0;
}