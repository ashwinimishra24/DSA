#include<iostream>
using namespace std;

// Class Defination
class Rectangle
{
    // Data members
    public:
    int length;
    int breadth;

    // Member functions
    public:
    int area()
    {
        return length * breadth;
    }
    int parameter()
    {
        return 2*(length + breadth);
    }

};

int main()
{
    // Object deceleration
    Rectangle values;

    values.length = 10;
    values.breadth = 20;

    cout<<"Area of the Rectangle: "<<values.area()<<endl;
    cout<<"Parameter of the Rectangle: "<<values.parameter()<<endl;

    return 0;
}