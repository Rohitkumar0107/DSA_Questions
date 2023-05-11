// problem based on to find max or min number in 2d array
#include <iostream>
#include <limits.h>
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
// function to find max number in 2d array
int maxi(int arr[][3])
{
    int maxi = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
// function to find min number in 2d array
int mini(int arr[][3])
{
    int mini = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printarray(arr);
    cout << "minimum number is " << mini(arr) << endl;
    cout << "maximum number is " << maxi(arr);
    return 0;
}