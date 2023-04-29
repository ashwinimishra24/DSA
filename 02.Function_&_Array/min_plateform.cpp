// Minimum Platforms Problem

#include <iostream>
using namespace std;

void MinPlateform(int arrival[], int departure[], int size)
{
    // Sort arrival and departure arrays
    sort(arrival, arrival + size);
    sort(departure, departure + size);

    int plateform_needed = 1;
    int result = 1;
    int i = 1;
    int j = 0;

    while (i < size && j < size)
    {
        if (arrival[i] <= departure[j])
        {
            plateform_needed++;
            i++;
        }
        else if (arrival[i] > departure[j])
        {
            plateform_needed--;
            j++;
        }
        result = max(plateform_needed, result);
    }
    cout << result;
}

int main()
{
    int arrival[6] = {900, 940, 950, 1100, 1500, 1800};
    int departure[6] = {910, 1200, 1120, 1130, 1900, 2000};

    MinPlateform(arrival, departure, 6);
}