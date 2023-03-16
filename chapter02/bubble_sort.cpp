#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 1, 4, 2, 8, 3, 0, 7, 9, };

    cout << "Initial:" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        for(int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
        {
            if(arr[j] > arr [j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1 ] = temp;
            }
        }
    }

    cout << "Sorted:" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}