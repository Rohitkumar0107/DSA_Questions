// problem based on find union of array with duplicate array
#include <iostream>
#include <vector>
using namespace std;

int unionarray(int arr[], int brr[], int size)
{
    vector<int> ans;
    int element;
    // push commen element
    for (int i = 0; i < size; i++)
    {
        element = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (element == brr[j])
            {
                ans.push_back(arr[i]);
                arr[i] = -1;
                brr[j] = -1;
            }
        }
    }
    // push arr element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            ans.push_back(arr[i]);
        }
    }
    // push brr element
    for (int i = 0; i < size; i++)
    {
        if (brr[i] != -1)
        {
            ans.push_back(brr[i]);
        }
    }
    // print element in ans OR union array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int size = 4;
    int arr[size] = {1, 2, 3, 4};
    int brr[size] = {2, 4, 6, 8};

    unionarray(arr, brr, size);

    return 0;
}