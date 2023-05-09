// find unique in given array  """" every element have 2 occurence but 1 element has only one find it """"

#include <iostream>
using namespace std;

int findunique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size = 11;
    int arr[size] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

    int unique = findunique(arr, size);
    cout << "unique element is " << unique;

    return 0;
}