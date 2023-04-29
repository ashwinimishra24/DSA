#include<iostream>
#include<map>
using namespace std;

void mergeArrays1(int* arr1, int* arr2, int size1, int size2, int* arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            // arr3[k++] = arr1[i++];
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            // arr3[k++] = arr2[j++];
            arr3[k] = arr2[j];
            j++;
            k++;           
        }
    }

    // Store remaining elements of first array
    while (i < size1)
    {
        //arr3[k++] = arr1[i++];
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Store remaining elements of second array
    while (j < size2)
    {
        //arr3[k++] = arr2[j++];
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeArrays2(int* arr1, int* arr2, int size1, int size2, int* arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < size1)
    {
        arr3[k++] = arr1[i++];
    }

    while(j < size2)
    {
        arr3[k++] = arr2[j++];
    }

    sort(arr3, arr3+size1+size2);
}

void mergeArrays3(int* arr1, int* arr2, int size1, int size2)
{
    map<int, int> mp;

    for(int i = 0; i < size1; i++)
    {
        mp[arr1[i]]++;
    }

    for(int j = 0; j < size2; j++)
    {
        mp[arr2[j]]++;
    }

    for(auto x : mp)
    {
        cout<<x.first<<" ";
    }
}


int main()
{
    int arr1[] = {3,5,7,9};
    int arr2[] = {2,4,6};
    int size1 = 4;
    int size2 = 3;
    int arr3[7] = {};


    // mergeArrays1(arr1, arr2, size1, size2, arr3);
    // cout<<"Merging two sorted array with two pointers: "<<endl;
    // for(int i = 0; i < 7; i++)
    // {
    //     cout<<arr3[i]<<" ";
    // }
    // cout<<endl;

    // mergeArrays2(arr1, arr2, size1, size2, arr3);
    // cout<<"Merging two sorted array by coping the element and then using sort fun: "<<endl;
    // for(int i = 0; i < 7; i++)
    // {
    //     cout<<arr3[i]<<" ";
    // }
    // cout<<endl;

    mergeArrays3(arr1, arr2, size1, size2);
    cout<<endl;

    return 0;
}