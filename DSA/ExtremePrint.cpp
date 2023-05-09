// problem for exttreme print in array

#include <iostream>
using namespace std;

int extremeprint(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j--;
    }
}

int main()
{

    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    extremeprint(arr, size);

    return 0;
}