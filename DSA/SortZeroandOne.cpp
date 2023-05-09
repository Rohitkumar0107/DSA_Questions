// problem based on sort zero's and one's in array
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// sort inbuilt function in c

int sortfunction(int arr[], int size)
{
    sort(arr, arr + size);

    // print array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// how to sort with out inbuilt function

int sortarray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i], arr[j]);
        }
        if (arr[j] == 0)
        {
            swap(arr[j], arr[i]);
        }
        if (arr[j] == 1)
        {
            j--;
        }
    }
    // print array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size = 10;
    int arr[size] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};

    sortarray(arr, size);

    return 0;
}