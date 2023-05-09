// Problem to reverse an given array

#include <iostream>
using namespace std;

int reversearray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reversearray(arr, size);
    printarray(arr, size);
    return 0;
}