// Compile time Polymorphism (Operator Overloading)

#include <iostream>
using namespace std;

class Sub
{
    public:
    int a;

    public:
    void operator+ (Sub &obj)
    {
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Output: "<< value2 - value1<<endl;
    }
};

int main()
{
    Sub obj1;
    Sub obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    return 0;
}