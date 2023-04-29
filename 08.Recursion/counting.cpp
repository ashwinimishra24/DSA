#include<iostream>
using namespace std;

void counting(int n)
{
    // Base case
    if(n == 0)
    {
        return;
    }

    // Recursive call(Head Recision)
    counting(n - 1);

    // Processing statements
    cout<<n<<" ";
}

int main()
{
    int n = 25;

    counting(n);
    cout<<endl;

    return 0;
}