// linear search in array in 2D array
#include <iostream>
using namespace std;

int printarray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool findkey(int arr[][3], int key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key = 6;

    printarray(arr);
    if (findkey(arr, key) == true)
    {
        cout << key << " is present " << endl;
    }
    else
    {
        cout << key << " is not present " << endl;
    }

    return 0;
}