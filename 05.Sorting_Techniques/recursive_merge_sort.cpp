#include<iostream>
using namespace std;

void printarray(int* arr, int e)
{
    for(int i = 0; i < e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr, int s, int e)
{
    printarray(arr, e+1);

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    cout<<"first array: ";
    printarray(first, len1);

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    cout<<"second array: ";
    printarray(second, len2);


    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 )
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    cout<<"merged array: ";
    printarray(arr, e+1);

    delete []first;
    delete []second;

    cout<<"function call ended"<<endl;
    cout<<endl;
}

void mergeSort(int *arr, int s, int e)
{
    //base case
    if(s >= e)
    {
        return;
    }
    
    int mid = (s+e)/2;

    //sorting left part
    mergeSort(arr, s, mid);
    
    //sorting right part
    mergeSort(arr, mid+1, e);

    //merging
    merge(arr, s, e);
}

int main()
{

    int arr[] = {3,7,6,1,5,8,2,0};
    int n = 8;
    cout<<"array is: ";
    printarray(arr, n);
    cout<<endl;

    mergeSort(arr, 0, n-1);

    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;

    return 0;
}