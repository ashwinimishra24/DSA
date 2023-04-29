#include <iostream>
using namespace std;

// Base / Parent class 1
class Shape
{
    protected:
    int width;
    int height;

    public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

// Base / Parent class 2
class Color
{
    protected:
    string color;

    public:
    void setColor(string c)
    {
        color = c;
    }
};

// Derived / Child class
class Rectangle : public Shape, public Color
{
    public:
    int getArea()
    {
        return width * height;
    }
    string getColor()
    {
        return color;
    }
};

int main()
{
    // Create an object of Rectangle
    Rectangle rect;

    // Set properties on the object
    rect.setWidth(5);
    rect.setHeight(10);
    rect.setColor("red");

    // Call methods on the object
    cout << "Area of Rectangle: " << rect.getArea() << endl;
    cout << "Color of Rectangle: " << rect.getColor() << endl;

    return 0;
}