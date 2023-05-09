// Union of array with no duplicate

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sizea = 4;
    int sizeb = 3;
    int arr[sizea] = {2, 4, 6, 8};
    int brr[sizeb] = {1, 3, 7};

    vector<int> ans;

    // push element of arr

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    // push element of brr

    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    // print ans vector or array

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}