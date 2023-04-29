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

// Derived / Child class of class Animal
class Mammal : public Animal
{
    public:
    void breathe()
    {
        cout << "Mammal is breathing." << endl;
    }
};

// Derived / Child class of class Animal
class Reptile : public Animal
{
    public:
    void crawl()
    {
        cout << "Reptile is crawling." << endl;
    }
};

// Derived / Child class of class Mammal & class Reptile
class Platypus : public Mammal, public Reptile
{
    public:
    void swim()
    {
        cout << "Platypus is swimming." << endl;
    }
};

int main()
{
    // Create an object of Platypus
    Platypus platypus;

    // Call methods on the object
    platypus.Mammal::eat();         // Ambiguity Problem
    platypus.Reptile::eat();        // Ambiguity Problem

    platypus.breathe();
    platypus.crawl();
    platypus.swim();

    return 0;
}