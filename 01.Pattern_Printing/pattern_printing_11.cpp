// Palindromic Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // loop for n rows
    for(int row = 1; row <= 2*n - 1; row++)
    {
        // for row 1st & last
        if(row == 1 || row == 2*n - 1)        
        {
            cout<<"*";
        }
        // for remaining rows in between 
        else
        {
            // pattern till n rows
            while(row <= n)
            {
                // loop for printing star in first column of each row
                cout<<"* ";

                // loop for printing numbers in between the stars
                int counter = 1;
                while(counter != row - 1)
                {
                    cout<<counter<<" ";
                    counter ++;
                }
                while (counter > 0)
                {
                    cout<<counter<<" ";
                    counter --;
                }
                
                // loop for printing star in last column of each row
                cout<<"*";
                break;
            }
            // pattern after n rows
            while(row > n)
            {
                // loop for printing star in first column of each row
                cout<<"* ";

                // loop for printing numbers in between the stars
                int counter = 1;
                while(counter != 2*n - row - 1)
                {
                    cout<<counter<<" ";
                    counter ++;
                }
                while (counter > 0)
                {
                    cout<<counter<<" ";
                    counter --;
                }
                
                // loop for printing star in last column of each row
                cout<<"*";
                break;
            }
        }
        // new line
        cout<<endl;

    }
}