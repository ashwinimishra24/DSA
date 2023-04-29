#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> Pages, int size, int student, int mid)
{
    int student_count = 1;
    int page_sum = 0;

    cout << "checking for mid "<< mid <<endl;
    for(int i = 0; i < size; i++)
    {
        if(page_sum + Pages[i] <= mid)
        {
            page_sum += Pages[i]; 
        }
        else
        {
            student_count++;
            if(student_count > student || Pages[i] > mid)
            {
                return false;
            }
            else
            {
                page_sum += Pages[i];
            }
        }
    }
    return true;
}

int BookAllocation(vector<int> Pages, int size, int student)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += Pages[i];
    }

    int start = 0;
    int end = sum;
    int ans = -1;

    while(start < end)
    {
        int mid = start + (end - start)/2;

        if(isPossible(Pages, size, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> Pages;
    Pages.push_back(10);
    Pages.push_back(20);
    Pages.push_back(30);
    Pages.push_back(40);

    int size = Pages.size();
    int student = 2;

    int ans = BookAllocation(Pages, size, student);
    cout<<"Maximum number of pages assigned to a student is minimum: "<<ans<<endl;

    return 0;
}