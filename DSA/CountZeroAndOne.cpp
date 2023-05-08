// problem to count 0's and 1's in given array

#include <iostream>
using namespace std;

int find0and1(int arr[], int size)
{
    int numZero = 0;
    int numOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero += 1;
        }
        if (arr[i] == 1)
        {
            numOne += 1;
        }
    }
    cout << "number of Zero's are " << numZero << endl;
    cout << "number of One's are " << numOne << endl;
}

int main()
{
    int size = 10;
    int arr[size] = {0, 1, 1, 0, 1, 1, 1, 0, 0, 1};

    find0and1(arr, size);

    return 0;
}