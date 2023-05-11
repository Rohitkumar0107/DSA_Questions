// problem to find transpose a given matrix
#include <iostream>
#include <vector>
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

int transpose(int arr[][3])
{
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
    printarray(ans);
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Normal array " << endl;
    printarray(arr);
    cout << "transpose array " << endl;
    transpose(arr);
    return 0;
}