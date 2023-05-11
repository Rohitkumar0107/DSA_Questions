// problem to sort 0's 1's and 2's in 2d array
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

int sort(int arr[][3])
{
    int start = 0;
    int end = 3 - 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > arr[i][j + 1])
            {
                swap(arr[i][j], arr[i][j + 1]);
                sort(arr);
            }
        }
    }
}
int main()
{
    int arr[3][3] = {{0, 1, 2}, {0, 1, 2}, {0, 1, 2}};
    cout << "normal array" << endl;
    printarray(arr);
    cout << "sorted Array" << endl;
    sort(arr);
    printarray(arr);
    return 0;
}