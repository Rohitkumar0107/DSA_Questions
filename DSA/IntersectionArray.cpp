// problem based to find intersection of 2 array
#include <iostream>
#include <vector>
using namespace std;

int intersection(int arr[], int brr[], int size)
{
    vector<int> ans;
    int element;
    for (int i = 0; i < size; i++)
    {
        element = arr[i];
        for (int j = 0; j < size; j++)
        {
            if (element == brr[j])
            {
                ans.push_back(brr[j]);
                brr[j] = -1;
            }
        }
    }
    // print ans
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

    intersection(arr, brr, size);

    return 0;
}