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

// Derived / Child class of class Animal
class Dog : public Animal
{
    public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

// Derived / Child class of class Dog
class GermanShepherd : public Dog
{
    public:
    void guard()
    {
        cout << "German Shepherd is guarding" << endl;
    }
};

int main()
{
    // Create an object of GermanShepherd
    GermanShepherd myDog;

    // Call methods on the object
    myDog.eat();
    myDog.bark();
    myDog.guard();

    return 0;
}