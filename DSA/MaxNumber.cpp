// find the maxmimum number in the given array

#include <iostream>
using namespace std;

int findmax(int arr[], int size)
{
    int MAXI = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > MAXI)
        {
            MAXI = arr[i];
        }
    }
    cout << "Max number is " << MAXI << endl;
}

int main()
{
    int size = 10;
    int arr[size] = {1, 2, 3, 5, 6, 8, 9, 10, 7, 4};

    findmax(arr, size);

    return 0;
}