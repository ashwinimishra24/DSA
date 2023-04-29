#include <iostream>

using namespace std;

// Base / Parent class
class Animal
{
    public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

// Derived / Child class from class Animal
class Dog : public Animal
{
    public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

// Derived / child class from class Animal
class Cat : public Animal
{
    public:
    void meow()
    {
        cout << "Cat is meowing." << endl;
    }
};

int main()
{
    // Create an object of Dog
    Dog dog;

    // Call methods on the Dog object
    dog.eat();  // Calls Animal::eat()
    dog.bark(); // Calls Dog::bark()

    // Create an object of Cat
    Cat cat;

    // Call methods on the Cat object
    cat.eat();  // Calls Animal::eat()
    cat.meow(); // Calls Cat::meow()

    return 0;
}