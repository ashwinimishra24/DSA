#include <iostream>
using namespace std;

// Base / Parent class
class Animal
{
    public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived / Child class
class Dog : public Animal
{
    public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

int main()
{
    // Create an object of Dog
    Dog myDog;

    // Call methods on the object
    myDog.eat();
    myDog.bark();

    return 0;
}