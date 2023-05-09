// Problem based on linear search
// key is present in array or not

#include <iostream>
using namespace std;
// Function to find key present or not
bool findkey(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
            break;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int size = 5;
    int arr[size] = {0, 2, 4, 5, 6};
    int key;
    cout << "Enter the key to search in array ! 1 to 10 " << endl;
    cin >> key;

    bool flag = findkey(arr, size, key);
    if (flag == true)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    return 0;
}