// introduction to 2d array array input and output
#include <iostream>
using namespace std;

int main()
{

    int arr[3][3];
    cout << "enter element for 3x3 array !" << endl;
    // intput in array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output in array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}