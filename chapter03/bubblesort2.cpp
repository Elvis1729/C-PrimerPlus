#include <iostream>
using namespace std;

void bubble_sort(int * arr, int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j =0; j < len - 1 -i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printarray(int * arr,int len)
{
    for (int i = 0;i < len;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,len);
    printarray(arr,len);
    
    return 0;
}