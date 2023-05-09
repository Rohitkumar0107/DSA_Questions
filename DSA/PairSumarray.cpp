// problem based on pair sum
#include <iostream>
#include <vector>
using namespace std;

int sumpair(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (sum == arr[i] + arr[j])
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}

int triplesum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (sum == arr[i] + arr[j] + arr[k])
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                }
            }
        }
    }
}

int main()
{
    int size = 7;
    int arr[size] = {1, 3, 5, 7, 2, 4, 6};
    int sum = 9;

    sumpair(arr, size, sum);
    cout << "triple sum" << endl;
    triplesum(arr, size, sum);

    return 0;
}