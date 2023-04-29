#include<iostream>
using namespace std;

int factorial(int n)
{
    // Base Case(rukna kab ha)
    if(n == 1)
    {
        return 1;
    }

    // Recursive call(Head Recision)
    int smaller_problem = factorial(n - 1);

    // Processing statements
    int bigger_problem = n * smaller_problem;
    return bigger_problem;

}

int main()
{
    int factorial_of = 9;

    cout<<"Factorial is: "<<factorial(factorial_of)<<endl;

    return 0;
}