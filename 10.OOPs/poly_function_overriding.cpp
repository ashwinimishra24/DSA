// Run time Polymorphism (Function OverRiding)

#include <iostream>
using namespace std;

// Base / Parent class
class Animal
{
    public:
    virtual void makeSound()
    {
        cout << "The animal makes a generic sound." << endl;
    }
};

// Derived / Child class
class Dog : public Animal
{
    public:
    void makeSound()
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    // Create an object of Dog
    Dog dog;

    // Call the makeSound() function on the dog object
    dog.makeSound();

    // Call the makeSound() function on the animal object using a pointer to the Dog object
    Animal *animalPtr = &dog;
    animalPtr->makeSound();

    return 0;
}