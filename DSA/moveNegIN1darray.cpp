// sort shift -ve number in 1d array
#include <iostream>
using namespace std;

int printarray(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
// shift -ve number by recursion
int sortrecursion(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            sortrecursion(arr);
        }
    }
}

int main()
{
    int arr[10] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    cout << "normal array" << endl;
    printarray(arr);
    cout << endl;
    cout << "short by recursion" << endl;
    sortrecursion(arr);
    printarray(arr);
    return 0;
}