#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // creation of queue
    queue<int> q;

    // pushing element in queue
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);
    q.push(12);

    // front element of the queue
    cout<<"front element of the queue is: "<<q.front()<<endl;

    // back element of the queue
    cout<<"back element of the queue is: "<<q.back()<<endl;

    // size of the queue
    cout<<"size of the queue is: "<<q.size()<<endl;

    // queue is empty or not
    cout<<"queue is empty or not: "<<q.empty()<<endl;

    // printing elements from queue
    cout<<"Elements in the queue is: ";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}