// sort 0's, 1's and 2's in 1d array
#include <iostream>
using namespace std;

int printarray(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
// sort by recursion
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
// sort by count
int sort(int arr[])
{
    int l = 0;
    int m = 0;
    int h = 10 - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else if (arr[m] == 2)
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 0};
    cout << "normal array" << endl;
    printarray(arr);
    cout << endl;
    // cout << "short by recursion" << endl;
    // sortrecursion(arr);
    sort(arr);
    printarray(arr);
    return 0;
}