// Compile time Polymorphism (Function Overloading)

#include <iostream>
using namespace std;

class Number
{
    public:
    // Function with integer parameter
    void printNumber(int x)
    {
        cout << "The integer number is: " << x << endl;
    }
    // Function with double parameter
    void printNumber(double x)
    {
        cout << "The double number is: " << x << endl;
    }
};

int main()
{
    Number values;

    // Call the printNumber() functions with different arguments
    values.printNumber(10);
    values.printNumber(3.14);

    return 0;
}