#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

void swaparray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    // Swap the number.
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printarr(arr, 10);
    cout << " " << endl;
    swaparray(arr, 10);
    printarr(arr, 10);
}