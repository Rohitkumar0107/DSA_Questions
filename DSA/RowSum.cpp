// problem based on sum of row in 2d array
#include <iostream>
using namespace std;

int inputarray(int arr[][3])
{
    cout << "enter values in 3x3 matrix !" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}
// row sum function
int rowsum(int arr[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
}
// column sum function
int colsum(int arr[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
        sum = 0;
    }
}
// print array
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
int main()
{
    int arr[3][3];
    inputarray(arr);
    cout << "array is " << endl;

    printarray(arr);

    cout << "row sum is => " << endl;
    rowsum(arr);
    cout << "col sum is => " << endl;
    colsum(arr);

    return 0;
}