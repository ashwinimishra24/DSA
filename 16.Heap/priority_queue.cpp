#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // initilizing heap [by deafault it is a max heap]
    priority_queue<int> pq;

    // inserting values in priority queue
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element after pop: "<<pq.top()<<endl;

    return 0;
}